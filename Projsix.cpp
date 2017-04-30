//**************************************************************************
//Final Project -- Movie Madness
//Author: [Alex Steel]
//Date: April 30, 2017
//Passes A Message In 2 Rings, and Finds The Min, Max, and Average of a Seed
//**************************************************************************
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "mpi.h" 

using namespace std;
int main (int argc, char * argv[]) 
{
	int my_rank;			// my CPU number for processes
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
	//create a welcome message on each process
	sprintf(message, "Beep, Boop, Beep. What are you, some R2 Double D2? %d,", my_rank);
	   
	//Even Number of CPU Processes
	//CPU % 2. 2%2=0. 4%2=0, 32%2=0. Check
	if (p % 2 == 0) 
	{
		if (my_rank == 0)//Creating a condition for the first process
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, 2, tag, MPI_COMM_WORLD); // Send the message, to proc 2
			MPI_Recv(message, 100, MPI_CHAR, p-2, tag, MPI_COMM_WORLD, &status); // receive a message from proc p-2.
		}//So, if 0 sends to 2, 2 sends back to 0
		else if (my_rank == p-2) //This is the receiving case. Pulling all messages from 32 to 0 in p-2 fashion
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, 0, tag, MPI_COMM_WORLD); //Send to 0
			MPI_Recv(message, 100, MPI_CHAR, my_rank-2, tag, MPI_COMM_WORLD, &status); // receive from the CPU Core my_rank-2. 
		}//So if CPU Core 2 is handling the work, then recv from CPU core 0
	   else if (my_rank % 2 == 0 && my_rank < p-1) //If even CPU core AND CPU core Number is Less than an Odd Proc
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, my_rank+2, tag, MPI_COMM_WORLD); //Send it 2 CPU cores above
			MPI_Recv(message, 100, MPI_CHAR, my_rank-2, tag, MPI_COMM_WORLD, &status); //recv from 2 CPU cores below
		}
		
		if (my_rank == 1)//if cpu core # 1
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, p-1, tag, MPI_COMM_WORLD); //send to the proc before it
			MPI_Recv(message, 100, MPI_CHAR, my_rank+2, tag, MPI_COMM_WORLD, &status); //recv from the CPU core 2 spots above it
		}//if the cpu core handling work is #1
		else if (my_rank == p - 1) //if the cpu core # is 1 less than the process. i.e CPU core #1, and Proc #2
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, p-3, tag, MPI_COMM_WORLD);//Send to 3 proc below it. i.e if of proc 2, send to proc 31
			MPI_Recv(message, 100, MPI_CHAR, 1, tag, MPI_COMM_WORLD, &status); //this message is received from proc 1
		}
		else if (my_rank%2 !=0 && my_rank < p-1)//if for whatever reason EvenProc % 2 != and the CPU Core # is 1 less than the EvenProc
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, my_rank-2, tag, MPI_COMM_WORLD); //send a message to 2 CPU cores below
			MPI_Recv(message, 100, MPI_CHAR, my_rank+2, tag, MPI_COMM_WORLD, &status); //recv from 2 CPU cores above.
		}
	}
	//Odd Number of CPU Processes
	//3%2=1, 5%2=1, etc
	if (p%2 != 0)//Generalized case for if the Proc is anything but even. Should return 1, but if it doesnt, !=0 will suffice
	{
		if (my_rank == 0)//CPU Core # 0 
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, 2, tag, MPI_COMM_WORLD); //send to proc 2
			MPI_Recv(message, 100, MPI_CHAR, p-1, tag, MPI_COMM_WORLD, &status); //recv from 31
		}	
		else if (my_rank == p-1)//cpu core # is p-1, so p=32, 31 core, "last runner" 
		{
		    MPI_Send(message, strlen(message)+1, MPI_CHAR, 0, tag, MPI_COMM_WORLD); //Send to proc 0
			MPI_Recv(message, 100, MPI_CHAR, my_rank-2, tag, MPI_COMM_WORLD, &status); //recv from CPU core # 2 below. 
		}
		else if (my_rank%2 == 0 && my_rank < p)//CPU Core # is 0 AND CPU core < 32 "middle runners"
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, my_rank+2, tag, MPI_COMM_WORLD); //send to CPU core # 2 above me MR+2
			MPI_Recv(message, 100, MPI_CHAR, my_rank-2, tag, MPI_COMM_WORLD, &status); //recv from CPU core # 2 below me. MR-2
		}
		if (my_rank == 1)//if CPU core # 1
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, p-2, tag, MPI_COMM_WORLD); //send to CPU 2 below, so last runner or 31
			MPI_Recv(message, 100, MPI_CHAR, my_rank+2, tag, MPI_COMM_WORLD, &status); //recv from CPU core # 2 above, so middle or 3
		}
		else if (my_rank == p-2)// p = 5, CPU Core # is 3, | 7,5 | 27,25, etc  
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, p-4, tag, MPI_COMM_WORLD); //send to the proc 4 below. 
			//So if Odd Proc, and CPU core is 2 below Proc. p=5, mr=3, send to 31 theoretically
			MPI_Recv(message, 100, MPI_CHAR, 1, tag, MPI_COMM_WORLD, &status); //recv from proc 1
		}
		else if (my_rank%2 != 0 && my_rank < p) //If odd proc and CPU core # < Proc at hand "1" --> "2"
		{
			MPI_Send(message, strlen(message)+1, MPI_CHAR, my_rank-2, tag, MPI_COMM_WORLD); // send to CPU Core 2 below
			MPI_Recv(message, 100, MPI_CHAR, my_rank+2, tag, MPI_COMM_WORLD, &status); //recv from CPU Core 2 Above
		}
	}
	
	printf("%s received by process %d.\n", message, my_rank); //Print String received by int, Message, CPU Core #
	
	int seed = 200;//Random Number between 200
	srand(seed);//random Number
	const int n = 1000000; //n will always be 1Mil
	
	// The huge array is this one
	int a[n] = {0}; //filling array "a" with 1Mil pos, all with Zeros
	//Fill Das Array
	for (int x=0; x<n; x++)
		a[x] = rand();//With an random number 0-199
 
	// Remember that your average has to be a decimal value, like a float or a double!!!
	// Also remember that you need to compute the minimum and maximum!
	// WRITE CODE HERE!!!!!
	// Break it up.
	int local_n = n/p; //1Mil / Number of Proc, 32 = 31250 (Each Proc does 31250 units of work)
	int local_start = local_n * my_rank; //1Mil*CPU Core # is where we start.
	int local_a[500000]; //local a array of 500000
	// SCATTER~!!!!
	MPI_Scatter(&a[0], local_n, MPI_INT, local_a, local_n, MPI_INT, 0, MPI_COMM_WORLD);
	//Send to a, 31250, INT, recv by local_a, recv 31250, INT, from Proc 0, CommWorld
 
	//Do our local work.
	//temp is set to zero and will take the highest value in the array.
	int temp = 0;
	for (int x = 0; x < local_n; x++) //x<31250
	{
		if (local_a[x] > temp)//Val of a after scatter > 0
		{
			temp = local_a[x]; //temp will store that val
		}
	}
	//max is where the MPI_MAX is being sent to.
	int max = 0;
 	//Reduce all stuffz
	MPI_Reduce(&temp, &max, 1, MPI_INT, MPI_MAX, 0, MPI_COMM_WORLD);
	//send to temp, # of max, from proc 1, INT, MAXIMUM, from proc 0, CommWorld
	//This makes it so it only prints out the max value once.
	if (my_rank == 0)
		cout<<"The maximum is "<< max <<endl;
 
	//KungFu is set to the max value so that it can compare and find the min.
	int KungFu = max;
	for (int y = 0; y < local_n; y++)
	{
		if (local_a[y] < KungFu) //val after reduce < max < KF
		{
			KungFu = local_a[y]; //KF stores that val
		}
	}
	
	//KungFu becomes the smallest value in the array.
	int min = 0;
	//min is where it's being sent to.
	MPI_Reduce (&KungFu, &min, 1, MPI_INT, MPI_MIN, 0, MPI_COMM_WORLD);
 	//send to KungFu, # of min, from proc 1, INT, MINIMUM, from proc 0, CommWorld
	
	if (my_rank ==0)
		cout<<"The minimum is "<< min <<endl;
		
	//the double sum is where the local_sum value is being sent to.
	//the local_sum is where the sum of all of the arrays is found.
	double sum = 0;
	double local_sum=0;
	for (int x = 0; x < local_n; x++) //fill local_sum with a<31250
	{
		local_sum += a[x];//sum it alllllll up
	}
	//this is what calculates the sum of the array.
	MPI_Reduce(&local_sum, &sum, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	//send to local_sum, # of sum, from proc 1, DOUBLE, SUMMATION, from proc 0, CommWorld
	
	//this is the average variable that calculates the average from the sum.
	double average = sum / n; //Average = Sum of everything / 1Mil
	
	if (my_rank==0)
		cout<<"The average is "<< average <<endl; //proc 0 now sends the average
		
	// Shut down MPI
	MPI_Finalize();
	return 0;
}
