#include <iostream>
using namespace std;

int main()
{
	int x = 12;
	int y = 6;
	{
		x = 14;
		cout << x << endl;
		y += --x;
		cout << "*y= " << y << endl;
	}
	{
		x = 5;
		{
			int x = 17;
			cout << "*x= " << x << endl;
			{int x = 0;}
			x--;
			cout << x << endl;
			y += x--;
			cout << "*y= " << y << endl;
		}
		cout << --x << endl;
		cout << x << endl;
		cout << "y++" << endl;
		
	}
	cout << x << endl;
	cout << y << endl;
	
	return 0;
}

/*
14
16
4
4
y++
4
35
*/

//wrong cout -2
//missed x-- ln18 and wrong cout -2
//wrong addition for y -2
//--x is dependent on x-- -2
//wrong y -2
//wrong end of scope -2
//attempt +3
//no attempt -15

