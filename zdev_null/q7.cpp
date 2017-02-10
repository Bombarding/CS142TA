#include <iostream>
using namespace std;

int main()
{
	double z = 35;
	int c = 7;
	int q = c + z;
	char y = 't';
	if(q-- == 41)
	{
		q *= 3;
	}
	else if(q-- == 41)
	{
		q *= 2;
	}
	else
	{
		c = 9;
	}
	y = 'r';
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
80
tip
tacos
r
*/