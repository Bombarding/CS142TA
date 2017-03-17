#include <iostream>
using namespace std;

// function declaration
double averageofarray(int [], int);
void print(int [][6], int);

int main () 
{
	
	int a[10] = {2, 1, 3, 5, 7, 4, 76, 21, 11, 19};

	// average the elements of this array
	// manual calculation without using a function
	double avg = 0;
	for (int x = 0; x < 10; x++) 
	{
		avg += a[x];
	}
	avg /= 10;
	cout << avg << endl;
	
	// -------------------
	// function call to compute the average of a
	cout << averageofarray(a, 10) << endl;
	
	for (int x = 0; x < 10; x++) 
	{
		cout << a[x] << " ";
	}
	cout << endl;
	
	// fill in the initial values of an array b
	int b[4][6] = {0};
	for (int x = 0; x < 4; x++) 
	{
		for (int y = 0; y < 6; y++) 
		{
			b[x][y] = x * 10 + y;
		}
	}
	
	// must explicitly send the number of rows (which is 4)
	print(b, 4);
	
	return 0;
}

// function definition
double averageofarray (int b[], int size) {
	// arrays are always passed by REFERENCE!
	// In other words, b is an alias of array a
	// Changes made to b inside the function are reflected in array a
	double avg = 0;
	for (int x = 0; x < size; x++) 
	{
		avg += b[x];
	}
	avg /= size;
	return avg;
}

void print (int b[][6], int sizerow) 
{
	// Print out a two dimensional array
	for (int row = 0; row < sizerow; row++) 
	{
		for (int col = 0; col < 6; col++) 
		{
			cout << b[row][col] << " ";
		} // end col for
		cout << endl;
	} // end row for	
	return;
}



