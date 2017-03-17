#include <iostream>
using namespace std;

int c (int &, int);

int main () 
{

	int s = 2, r = 4; //initialize
	cout << c(s,r) << endl; //out:7
	cout << s << endl;//out:3
	cout << r << endl;//out:4
}

int c (int & w, int q) // s,4
{
	w++;//s++ = 3
	return w + q;//7	
}

/*
Out:
7
3
4
*/