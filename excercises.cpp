#include <iostream>
using namespace std;

int main()
{
	//explicit array with 10
	int ak47[10] = {1,3,5,7,9,11,13,15,17,19}; 
	int n,n1,n2,n3,n4,n5,n6,n7,n8,n9;
	//fill b with input
	int b[10];
	for(int x = 0; x < 10; x++)
	{
		cin >> b[x];
	}
	//search for 11
	if((ak47[5] = 11))
	{
		cout << ak47[5] << endl;
	}
	cout << "hi" << endl;
	int hi;
	cin >> hi;
	for(int x = 0; x < 1; x++)
	{
		cin >> b[x];
		if(hi == b[x])
		{
			cout << hi << endl;
		}
	}
	cout << "lol" << endl;
	
	int bb[10] = {1,3,5,7,9,11,13,15,17,19};
	for(int x = 0; x < 10; x++)
	{
		cin >> b[x];
		if((b[x] = bb[10]))
		{
			cout << "same" << endl;
		}
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
	
	
	
	
	
	return 0;
}