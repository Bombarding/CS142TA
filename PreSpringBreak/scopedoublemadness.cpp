#include <iostream>
using namespace std;

int main () 
{

	int r = 4; // set r to 4
	{
		r = 12; // set r to 12
		cout << r << endl; //print 12
		int r = 9; // set r to 9
		cout << r << endl; // print 9
		if (r < 12) //if r < 12, which it is, r become 18
		{
			r = 18; // r becomes 18
		}
		else //ignore
		{
			{{{{{r=-1;}}}}}
		}
		cout << r << endl; // print 18
		{
			int r = 90; // r becomes 90
			r = 29; //r becomes 29
			cout << r << endl; // print 29
			{ 	
				r = 91; // r becomes 91
				cout << r << endl; // print 91
			}
			cout << --r << endl; // print 90
			r %= 5; // r is 18
		}
		r = 5; // r becomes 5
	}
	cout << r << endl; // print 12
	return 0;
}

//output
/*
12
9
18
29
91
90
12
*/