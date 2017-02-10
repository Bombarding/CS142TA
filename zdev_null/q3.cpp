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
	}
	{
		x = 5;
		{
			int x = 17;
			{int x = 0;}
			x--;
			cout << x << endl;
			y += x--;
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