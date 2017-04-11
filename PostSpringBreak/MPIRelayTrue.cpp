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
	if (my_rank == 0)
		sprintf(message, "Boop");
	
	if (my_rank == 0) 
	{
		cout << my_rank << " is running around the track!" << endl;
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 1, tag, MPI_COMM_WORLD);
		MPI_Recv(message, 100, MPI_CHAR, p-1, tag, MPI_COMM_WORLD, &status);
		cout << "Cry because we lost because we are millenials." << endl;
		cout << "Consider the philosophical consequences of losing to nobody." << endl;
		cout << "#socialjustice" << endl;
	}
	//Process 0 Will not change at all. Therefore, Proc0 Requires a special case
	
	else if(my_rank == p-1) //Therefore I am the last runner
	{
		MPI_Recv(message, 100, MPI_CHAR, p-2, tag, MPI_COMM_WORLD, &status);
		cout << my_rank << " is running around the track!" << endl;
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 0, tag, MPI_COMM_WORLD);
	}
	else
	{
		MPI_Recv(message, 100, MPI_CHAR, my_rank-1, tag, MPI_COMM_WORLD, &status);
		cout << my_rank << " is running around the track!" << endl;
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, my_rank+1, tag, MPI_COMM_WORLD);	
	}//Default Case aKa Middle Runner
	
	/*
	//Old code
	else if (my_rank == 1) 
	{
		MPI_Recv(message, 100, MPI_CHAR, 0, tag, MPI_COMM_WORLD, &status);
		cout << my_rank << " is running around the track!" << endl;
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 2, tag, MPI_COMM_WORLD);
	}
	else if (my_rank == 2) 
	{
		MPI_Recv(message, 100, MPI_CHAR, 1, tag, MPI_COMM_WORLD, &status);
		cout << my_rank << " is running around the track!" << endl;
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 3, tag, MPI_COMM_WORLD);
	}
	else if (my_rank == 3) 
	{
		MPI_Recv(message, 100, MPI_CHAR, 2, tag, MPI_COMM_WORLD, &status);
		cout << my_rank << " is running around the track!" << endl;
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 4, tag, MPI_COMM_WORLD);
	}
	else if (my_rank == 4) 
	{
		MPI_Recv(message, 100, MPI_CHAR, 3, tag, MPI_COMM_WORLD, &status);
		cout << my_rank << " is running around the track!" << endl;
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 0, tag, MPI_COMM_WORLD);
	}
	
	*/
	
		 
	// Shut down MPI
	MPI_Finalize();

	return 0;
}

/*
	This way of doing things is not super efficient, So lets generalize it
	This code is not actually parallel in the way we thought about earlier.
	
	P0 - Sends message to 1
	P1 - Waits to receive, Sends message to 2
	P2 - Waits to receive, Sends message to 3
	P3 - Waits to receive, Sends message to 4
	P4 - Waits to receive, Sends message to 0
	
	At any given time, only 1 process does something at 1 time.
	If we want to take advantage of MultiCore Processing. 
	We need to have the cores do something all at once.
	We Need Simultaneous Action. 
	
	Lets create a *Definately Not a Relay Race*
	5 Procs run together, Sum up the Total Times, Divide by Proc, Avg Time = Parallel Time
	
	Lets Write This as a 3 case condition
	
*/