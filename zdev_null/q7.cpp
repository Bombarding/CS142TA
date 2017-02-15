#include <iostream>
using namespace std;

int main()
{
	double z = 35;
	int c = 7;
	int q = c + z;
	char y = 't';
	cout << "*q = " << q << endl;
	cout << "*q-- = " << q-- << endl;
	cout << "*q++ = " << q++ << endl;
	if(q-- == 41)
	{
		q *= 3;
		cout << "*q = " << q << endl;

	}
	else if(q++ == 42)
	{
		q *= 2;
		cout << "*q = " << q << endl;
	}
	else
	{
		c = 9;
		cout << "*c = " << c << endl;
	}
	y = 'r';
	cout << "*y = " << y << endl;
	cout << "*z/c = " << z/c << endl;
	
	//if z/c >5 -5
	if(z/c <= 5)
	{
		cout << q << endl;
	}
	cout << "tip" << endl;
	if(y == 't')
	{
		cout << q << "doba" << endl;
	}
	else
	{
		cout << "tacos" << endl;
	}
	cout << y << endl;
	
	return 0;
}
/*
*q = 42
*q-- = 42
*q++ = 41
*c = 9
*y = r
*z/c = 3.88889
42
tip
tacos
r
*/