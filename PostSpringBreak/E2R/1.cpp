#include <iostream>
using namespace std;
// This program tests your understanding of pass by value and pass by reference

int a(int, int);
int b(int &);

int main () {

	int n = 7;
	int r = 9;
	cout << a(r, b(n)) << endl;
	cout << n << endl;
	
	return 0;
}

int a(int x, int y) 
{
	return x/y + x * y;
}

int b(int & z) 
{
	z /= 2;
	return (z+6)*3;
}

/*
1. start with n=7, and r=9.
a(r, b(n)) = a(x,y) x = 9, y = b(n)
b(&z) z-->n = 7
z/=2 --> N --> 7/2 = 3 .... (3+6)*3 = 29
z = 29

a(x=9, y=29) = 243

Out:
243
3
*/