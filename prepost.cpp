#include <iostream>
using namespace std;

int main()
{
	int a = 6;
	a = a + 4;
	a += 4;
	a += 1;
	a++; //increment
	a--; //detriment
	
	int y = 6;
	cout << y + 1 << endl;
	cout << y << endl;
	cout << "" << endl;
	cout << y++ << endl; // post increment
	cout << y << endl;
	cout << "" << endl;
	cout << ++y << endl; // pre increment
	cout << y << endl;
	y--; //post decrement
	--y; //pre decrement
	
	
	return 0;
}