#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //Rand
#include <time.h> //Rand
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
	/*
	int J[6] = {7,14,3,6,2,1};
	int K[6] = {2,4,6,8,10,12};
	
	int DotProduct = 0;
	for(int X = 0; x < 6; X++)
		DotProduct += (J[X] * K[X]);
	cout << DotProduct << endl;
	*/
	
	//1. Knowing the problem
	srand(time(0));
	int n = 3000000;
	int A[3000000], B[3000000];
	double dotproduct = 0;
	//if the cpu == 0, aka process 0
	if(my_rank == 0)
	{
		for(int x = 0; x < n; x++) //fill the arrays
		{
			A[x] = rand() % 8; //0-7 fill A
			B[x] = rand() % 8; //0-7 fill B
		}
	}
	//2. Divide the problem up
	//Assume that we have 30 processors
	int localA[10000], localB[10000]; //keeping track of A and B
	int local_n = n/p; // 10000
	MPI_Scatter(&A[0], local_n, MPI_INT, localA, local_n, MPI_INT, 0, MPI_COMM_WORLD);
	MPI_Scatter(&B[0], local_n, MPI_INT, localB, local_n, MPI_INT, 0, MPI_COMM_WORLD);
	//LocalA and LocalB have the right stuffs.
	
	//Purpose of Scatter
	/*
		Process 0 is going to share Array A, in chunks of size local_n(10000), and every process will store local_n(10000) elements in localA array
		Process 0 is going to share Array B, in chunks of size local_n(10000), and every process will store local_n(10000) elements in localB array
		P_0 Gets first 10k
		P_1 Gets second 10k
		.	.	.
		.	.	.
		.	.	.
		P_29 Gets final 10k
	
	*/
	double LocalDotProduct = 0;
	for(int x = 0; x < local_n; x++)
		LocalDotProduct += localA[x] * localB[x];
	cout << LocalDotProduct << endl;
	
	//Combine it allz. All your Base R Belong to us.
	if(my_rank != 0)
		MPI_Send(&LocalDotProduct, 1, MPI_DOUBLE, 0, tag, MPI_COMM_WORLD);
	else
	{
		dotproduct = LocalDotProduct;
		double temp;
		for(int i = 1; i < p; i++)
		{
			MPI_Recv(&temp, 1, MPI_DOUBLE, MPI_ANY_SOURCE, tag, MPI_COMM_WORLD, &status);
			dotproduct += temp;	
		}	
	}
	if(my_rank == 0)
		cout << dotproduct << endl;
	
	MPI_Reduce(&LocalDotProduct, &dotproduct, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	// Shut down MPI
	MPI_Finalize();

	return 0;
}

/*
	Dot Product
	int ArrayA [] = {7,13,3,6,2,1}
	int ArrayB [] = {2,4,6,8,10,12}
	Multiply each pair of number across. Then add
	7*2 + 13*4 + 3*6 + 6*8 + 2*10 + 12*1
	
	Time Complexity = log(P)
	
	P(n-1)
	|			*
	|		*		*
	|	*		**		*
	|
	|
	|
	|

*/