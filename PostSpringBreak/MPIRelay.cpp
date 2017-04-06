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
	//Create some Batonage
	/*MPI_Send(message, strlen(message) + 1, MPI_CHAR, 1, tag, MPI_COMM_WORLD);
	MPI_Recv(message, 100, MPI_CHAR, 0, tag, MPI_COMM_WORLD, &status);*/
	if(my_rank == 0)
	{
		sprintf(message, "HighDoor");
		cout << my_rank <<" is Running around the track" << endl;
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 1, tag, MPI_COMM_WORLD);
		MPI_Recv(message, 100, MPI_CHAR, 4, tag, MPI_COMM_WORLD, &status);
		cout << "Woop Woop, Thats the sound of the police!" << endl;
	}
		
	if(my_rank == 1)
	{
		sprintf(message, "Bloop");
		cout << my_rank <<" is Running around the track" << endl;
		MPI_Recv(message, 100, MPI_CHAR, 0, tag, MPI_COMM_WORLD, &status);
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 2, tag, MPI_COMM_WORLD);
		cout << "Woop Woop, Thats the sound of the police!" << endl;
	}
		
	if(my_rank == 2)
	{
		sprintf(message, "RickyyySanchez");
		cout << my_rank <<" is Running around the track" << endl;
		MPI_Recv(message, 100, MPI_CHAR, 1, tag, MPI_COMM_WORLD, &status);
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 3, tag, MPI_COMM_WORLD);
		cout << "Woop Woop, Thats the sound of the police!" << endl;
	}	
	if(my_rank == 3)
	{	
		sprintf(message, "Hi Morty");
		cout << my_rank <<" is Running around the track" << endl;
		MPI_Recv(message, 100, MPI_CHAR, 2, tag, MPI_COMM_WORLD, &status);
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 4, tag, MPI_COMM_WORLD);
		cout << "Woop Woop, Thats the sound of the police!" << endl;
	}	
	if(my_rank == 4)
	{
		sprintf(message, "Game Over");
		cout << my_rank <<" is Running around the track" << endl;
		MPI_Recv(message, 100, MPI_CHAR, 3, tag, MPI_COMM_WORLD, &status);
		MPI_Send(message, strlen(message) + 1, MPI_CHAR, 0, tag, MPI_COMM_WORLD);
		cout << "Woop Woop, Thats the sound of the police!" << endl;
	}
	/*
[asteel@thomas ~/CS142MPI]$ mpirun -np 5 blah
0 is Running around the track
Woop Woop, Thats the sound of the police!
Woop Woop, Thats the sound of the police!
Woop Woop, Thats the sound of the police!
Woop Woop, Thats the sound of the police!
Woop Woop, Thats the sound of the police!
[asteel@thomas ~/CS142MPI]$ rm MPIRelay.cpp
[asteel@thomas ~/CS142MPI]$ touch MPIRelay.cpp
[asteel@thomas ~/CS142MPI]$ nano MPIRelay.cpp
[asteel@thomas ~/CS142MPI]$ mpicxx -o blah MPIRelay.cpp
[asteel@thomas ~/CS142MPI]$ mpirun -np 5 blah
2 is Running around the track
Woop Woop, Thats the sound of the police!
3 is Running around the track
Woop Woop, Thats the sound of the police!
4 is Running around the track
Woop Woop, Thats the sound of the police!
0 is Running around the track
Woop Woop, Thats the sound of the police!
1 is Running around the track
Woop Woop, Thats the sound of the police!
	*/
	
	// Shut down MPI
	MPI_Finalize();

	return 0;
}