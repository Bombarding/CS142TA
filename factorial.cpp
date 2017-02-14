#include <iostream>
#include <math.h>
using namespace std;

int FacYou(int);


int main()
{
	int n;
	cin >> n;
	
	cout << FacYou(n) << endl;
	
	return 0;
}

int FacYou(int y)
{
	int fac_so_far = 1;
	for(int x = y; x>0; x--)
	{
		fac_so_far *= x;
		
	}
	return fac_so_far;
}

/*
5
120
*/