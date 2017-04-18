#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //Rand
#include <time.h> //Rand
#include "mpi.h" // message passing interface
using namespace std;

// Thurs FB148 C4 Tourney
// Do this ONCE when you start up thomas
// module load openmpi-x86_64

// New compile and run commands for MPI!
// mpicxx -o blah file.cpp
// mpirun -np 32 blah

int main (int argc, char * argv[]) {

	int my_rank;			// my CPU number for this process
	int p;					// number of CPUs that we have
	int source;				// rank of the sender
	int dest;				// rank of destination
	int tag = 0;			// message number
	char message[100];		// message itself
	MPI_Status status;		// return status for receive
	
	// Start MPI
	MPI_Init(&argc, &argv);
	
	// Find out my rank!
	MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
	
	// Find out the number of processes!
	MPI_Comm_size(MPI_COMM_WORLD, &p);
	
	// THE REAL PROGRAM IS HERE
	/*
	int a[9] = {4,5,2,6,-3,7,1,2,8};
	int psum[9] = {0};
	psum[0] = a[0]; // Makes 0 of psum 4
	for(int x = 1; x < 9; x++)
		psum[x] = psum[x-1] + a[x];
	
	for (int x = 0; x < 9; x++)
		cout << psum[x] << " ";
	*/
	//int a[9] = {4,5,2,6,-3,7,1,2,8}
	
	// p = 3
	//p0 gets 0-2, p1 gets 3-5, p2 gets 6-8
	//p0 will calculate 4,5,2 --> 4,9,11
	//p1 will calculate 6,-3,7 -->  17,14,21
	//p2 will calculate 1,2,8 --> 22,24,32
	
	//p1 and p2 sends to p3, p3 send to both p4 and p5.
	/*
		now, lets attempt to use 5 procs.
		looking at proc3. When it calculates, all local sets of numbers need to send
		need to set up a loop to send the message to everyone after me, we should be in good shape
		We are expecting numbers from everyone before me, and send a message to everyone after me
		Then we can update the final answer accordingly, and get the right piece, with 17, 14 and 21.
		Once we get those 3 numbers, we get the 22, 24 and 32, then we can glue the final 3 local arrays
		back together. Take Problem, break into chunks, calculate the first set of numbers, and while
		we are figuring out to combine everything, we have to send a bunch of messages around. Once everything settles
		down, we can collect everything from before.
	*/
	
	//Know the problem
	srand(time(0));
	int n = 300000;
	int a[300000];
	double psum[300000];
	if(my_rank == 0)
		for(int x = 0; x<n; x++)
			a[x] = rand() % 8;
	//Divide Das Problem Upski
	//Assume that we have 30 Procs
	int locala[10000];
	double localpsum[10000];
	int local_n = n/p; //local n is 10k
	//Now we need to scatter the array
	MPI_Scatter(&a[0], local_n, MPI_INIT, locala, local_n, MPI_INT, 0, MPI_COMM_WORLD);
	//Scatter the a array, on proc 0, break into chunks of 10k (local_n) ints, and put in new array locala, also of size 10k (local_n)
	
	//Do the local work
	localpsum[0] = locala[0];
	for(int x = 1; x< local_n; x++)
		localpsum[x] = localpsum[x-1] + locala[x];
		
	//combine the localresults back together
	//this will happen in several stages
	
	//Send my last partial prefix sum answer to all later procs.
	for(int i = my_rank + 1; i < p; i++)
		MPI_Send(&localpsum[local_n - 1], 1, MPI_DOUBLE, x, tag, MPI_COMM_WORLD); //999999
	//Receive all of the partial prefix sum
	double temp = 0;
	int num_messages_recieved = 0; //tallies up the total numbers of messages recieved
	int localadditive = 0; //the final number we need to add to each entry
	while(num_messages_recieved < my_rank)
	{
		MPI_Recv(&temp, 1, MPI_DOUBLE, MPI_ANY_SOURCE, tag, MPI_COMM_WORLD, &status);
		localadditive += temp;
		num_messages_recieved++;
	}
	//now time to add local additive to local prefix sum array.
	for(int x = 0; x< local_n; x++)
		localpsum[x] += local_n;
	
	//finally we collect all answers by reversing scatter.
	MPI_Gather(&localpsum[0], local_n, MPI_DOUBLE, psum, local_n, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	if(my_rank == 0)
		for(int x = 0; x < n; x++)
			cout << psum[x] << "";
				if((x+1) % 10 == 0)
					cout << endl;
		 
	// Shut down MPI
	MPI_Finalize();

	return 0;
}

/*
	What we will be doing today, Solving another Parallel Program
	Sum up to 300k, Dot product array, linear algebra.
	Today, we will be solving something called the $PREFIX SUM Problem.
	  0 1 2 3 4 5 6 7 8 = 9Elem
	A[4,5,2,6,-3,7,1,2,8] <-- Some Array
	B[4,9,11,17,21,22,24,32] <-- New Array, Now we must calculate in a sequential Env
	The Prefix Sum problem is to do the following thing.
	Given an array, calculate a new array
	To Calculate the ResArray, we add up all the entries in OrigArray, up to 4
*/