#include <iostream>
using namespace std;

int main()
{
	//1
	int game[10] = {99,22,33,123,983,11,22,11,999,100};
	int play[10];
	//2
	for(int halo=0;halo<10;halo++)
	{
		cin>>play[halo];
	}
	//3
	for(int gears=0; gears<10; gears++)
	{
		if (game[gears] == 11)
		{
			cout << "11";
		}	
	}
	//4
	int in;
	cin>>in;
	for(int rain=0; rain<10; rain++)
	{
		if (game[rain] == in)
		{
			cout << in;
		}	
	}
	//5
	int player[10] = {34,11,12,66,54,33,12,13,99,88};
	//6
	for(int x = 0; x<10; x++)
	{	
		if(game[x] == player[x])
		{
			cout << "UGH!";
		}
	}
	//7
	int in2;
	cin >> in2;
	int nt;
	for(int y = 0; y<10; y++)
	{
		if(game[y] == in2)
		{
			nt++;
		}
	}
	cout << endl;
	//8
	int muhfib[25] = {1,1};
	for(int x=2; x<25; x++)
	{
		muhfib[x] = muhfib[x-1]+muhfib[x-2];
		cout << muhfib[x] << " ";
		if((x+1)%5 == 0)
		{
			cout << endl;
		}
	}
	//9
	for(int alex=0; alex<9; alex++)
	{
		for(int ss = alex+1; ss<10; ss++)
		{
			if(game[alex] > game[ss])
			{
				int sss = game[alex];
				game[alex] = game[ss];
				game[ss] = sss;
			}
		}
	}
	
	int x[10] = {99,22,33,123,983,11,22,11,999,100};
	int y[10];
	
	for(int x = 0;x < 9;x++)
	{
		for(int y = x + 1; y < 10; y++)
		{
			if(a[x]>a[y])
			{
				int temp = a[x];
				a[x]=a[y];
				a[y] = temp;
			}
		}
	}
	
	
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

/*
Fibby Numbers
1,1,2,3,5,8,13,21,34,55,89*/