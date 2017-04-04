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
//-np is a flag meaning number of processors.

int main (int argc, char * argv[]) {
	//Name of Process
	int my_rank;			// my CPU number for this process
	//
	int p;					// number of CPUs that we have
	//
	int source;				// rank of the sender
	//
	int dest;				// rank of destination
	//
	int tag = 0;			// message number
	//
	char message[100];		// message itself
	//
	MPI_Status status;		// return status for receive
	
	// Start MPI
	MPI_Init(&argc, &argv);
	
	// Find out my rank!
	MPI_Comm_rank(MPI_COMM_WORLD, &my_rank); //Rank is assigned within this function
	
	// Find out the number of processes!
	MPI_Comm_size(MPI_COMM_WORLD, &p);
	
	// THE REAL PROGRAM IS HERE
	cout << my_rank << " is Rick Sanchez" << endl;
	if(my_rank % 2 == 0)
	{
		cout << my_rank << " is on the left." << endl;
	}
	else
	{
		cout << my_rank << " is on the right" << endl;
	}
	// Shut down MPI
	MPI_Finalize();

	return 0;
}