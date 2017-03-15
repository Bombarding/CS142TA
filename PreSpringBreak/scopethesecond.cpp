#include <iostream>
using namespace std;

int main()
{
	int x = 32; // x = 32
	{
		int x = 55; // x = 55
		{
			int x = 27; // x = 27
			x = 14; //set x to 14
			{
				cout << x << endl; //prints 14
			}
		
		}
		cout << x << endl; // x = 55
		{
			x = 22;
		}
		cout << x << endl; // detailed above, x = 22
	}
	x = 50; // x = 50
	cout << x << endl; // x = 50
	
	return 0;
}