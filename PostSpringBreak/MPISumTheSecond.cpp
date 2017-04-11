/*
	embarrassingly parallel programs
	The amount of time to stuff 500 envelops, that would take 500 units of time.
	Since we have 19 total Students, we should have 19x improvement.
	
	Sequential Time = T
	Parallel Time = T/P  *Ignores Overhead and Bottlenecking
	
	There are basically 4 steps we need to follow.
	1. Know the problem
	2. Break up the Problem
	3. Each Process Does it's own local work (Why you want to do parallel. The $$$ Step)
	4. Collect/Combine the local work into 1 place
	5. Profit
	
	Remember
	
	
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include "mpi.h" // message passing interface
using namespace std;

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
	/*int sum = 0;
	for(int x = 0; x < 300000; x++)
		sum += x;
	cout << sum << endl;*/
	int sum = 0;
	//1. Knowing the Problem
	int number = 300000; //n
	double total = 0;
	//2. Break the Problem into Pieces
	//P = 30. 300000/30 = 10000
	int local_start = (my_rank*(number/p));
	//3. Do the Local Work
	double local_sum = 0;
	//for(int x = local_start; x < (local_start + (number/p)); x++)
	for(int x = local_start; x < (my_rank+1 * (number/p)); x++)
		local_sum += x;
	//4. Combine the Local Work into 1 place
	//Add up all the local sum variables into 1 total sum
	//The boss process is called the overseeer
	if(my_rank != 0)
		MPI_Send(&local_sum, 1, MPI_DOUBLE, 0, tag, MPI_COMM_WORLD);
	else
	{
		sum = local_sum;
		//Need a holding place for the mail as it comes in
		double temp;
		//there will be p-1 messages coming to me.
		for(int x = 1; x< p; x++)
		{
			MPI_Recv(&temp, 1, MPI_DOUBLE, MPI_ANY_SOURCE, tag, MPI_COMM_WORLD, &status);
			sum += temp;
		}//end transmission to recieve from Proc 0-29 aka 30
	}
	if(my_rank == 0)
		cout << sum << endl;
	
	
	// Shut down MPI
	MPI_Finalize();

	return 0;
}