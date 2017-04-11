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

		 
	// Shut down MPI
	MPI_Finalize();

	return 0;
}