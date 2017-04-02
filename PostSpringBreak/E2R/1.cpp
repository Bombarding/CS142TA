#include <iostream>
using namespace std;
// This program tests your understanding of pass by value and pass by reference

int a(int, int);
int b(int &);

int main () 
{

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
