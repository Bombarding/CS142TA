#include <iostream>
using namespace std;

int main () {
	
	// 1
	int a[10] = {10, 12, 5, 34, 23, 22, 11, 4, 2, 11};
	
/*	// 2 
	int b[10];
	for (int x = 0; x < 10; x++) {
		cin >> b[x];
	}
*/	
	// 3
	for (int x = 0; x < 10; x++) {
		if (a[x] == 11) 
		{
			cout << "There is an 11!" << endl;
			break;
		}
	}
	
	// 4
	int input;
	cin >> input;
	for (int x = 0; x < 10; x++) 
	{
		if (a[x] == input) {
			cout << "There is an " << input << "!" << endl;
			break;
		}
	}

	// 5
	int b[10] = {10, 32, 2, 7, 31, 17, 9, 3, 8, 4};

	
	// 6
	for (int x = 0; x < 10; x++) {
		if (a[x] == b[x]) {
			cout << "deathly" << endl;
		}
	}
	
	// 7
	int input2;
	cin >> input2;
	int numtimes = 0;
	for (int x = 0; x < 10; x++) {
		if (a[x] == input2) {
			numtimes++;
		}
	}
	cout << numtimes << endl;
	
	cout << endl;
	
	// 8
	int fib[25] = {1, 1};
	for (int x = 2; x < 25; x++) 
	{
		fib[x] = fib[x-1] + fib[x-2];
	}
	
	for (int x = 0; x < 25; x++) 
	{
		cout << fib[x] << " ";
		if ((x+1) % 5 == 0) 
		{
			cout << endl;
		}
	}
	cout << endl;
	
	// 9
	
	// the x position refers to the index of the variable being compared WITH
	// or in other words, the index of the place where we put the "minimum"
	// the y position refers to the index of the variable being compared TO
	for (int x = 0; x < 9; x++) 
	{
		for (int y = x+1; y < 10; y++) 
		{
			if (a[x] > a[y]) 
			{
				// swap the two variables
				int temp = a[x];
				a[x] = a[y];
				a[y] = temp;
			} // end if
		} // end y for
	} // end x for
	
	return 0;
}

/*
	1) Write a program that creates an array a of length 10 and initializes it explicitly.
		Choose any numbers you want, but make sure they're not in order.
	2) Ask the user to type in 10 numbers and fill in a new array b with those numbers.
	3) Scan (or search) through the array and see if the number 11 is there.
		Print it out if it's there, but if it appears more than once, only print it out once!
	4) Let the user type in what they want to search for, and search for that.
	5) Comment out part 2) and create b explicitly.
	6) Compare each corresponding entry of a to b and scream out an appropriately deathly
		fake word if the numbers are the same.
	7) Count how many times a number typed by the user appears in array a.
	8) Create an array that has the first 25 Fibonacci numbers.
	9) Suppose you have an array of 100 numbers that are in no particular order. Put them in
		sorted order.
*/	