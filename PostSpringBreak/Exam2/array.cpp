#include <iostream>
using namespace std;

int main () {
/*	
	int sat1;
	int sat2;
	int sat3;
	int sat4;
	int sat5;
	
	cin >> sat1;
	cin >> sat2;
	cin >> sat3;
	cin >> sat4;
	cin >> sat5;
	
	int sum = sat1 + sat2 + sat3 + sat4 + sat5;
	cout << sum/5.0 << endl;
*/	
	int x = 9;//9
	// the statement below is the analogue of "int x;"
	int a[10]; // initializes an array of size 10
	a[4] = 9;//pos5 = 9
	a[5] = x + 4;//pos6 = 13
	x = a[4] + a[5];//22
	
	int y = 0;//0
	int b[10] = {4, 3, 2, 1, 7, 13, 6};
	// same as 
	// b[0] = 4
	// b[1] = 3
	// b[2] = 2 
	// ...
	// b might have "holes" if we don't list enough values
	// in the explicit initialization
	
	// special shortcut to set all the entries in an array to zero
	int c[100] = {0};
	// This does not work for any number other than 0
	
	x = 5;
	a[4] = x + 7;
	a[6-4] = x - 7;
	a[x + 32 % 2 + 17/3 + 90000] = 9;
	cout << a[90010] << endl;
	// Don't touch thomas's private parts yo. That's not cool.
	
	// Fresh start!
	int sat[4500];
	// cin >> sat[0];
	// cin >> sat[1];
	for (int x = 0; x < 4500; x++) 
	{
		cin >> sat[x];
	}
	
	double average = 0;
	for (int x = 0; x < 4500; x++) 
	{
		average += sat[x];
	}
	average /= 4500;
	cout << average << endl;
	
	return 0;
}

