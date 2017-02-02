#include <iostream>
using namespace std;

int main()
{	
	
	int input;
	cout << "Please enter in an integer number" << endl;
	cin >> input;
	/*
	int divisor = 2;
	while(divisor < input)
	{
		int remainder = input % remainder;
		if(remainder = 0)
		{
			cout << "Not Prime" << endl;
		}
		else
		{
			cout << "Prime" << endl;
		}
		divisor = divisor + 2;
	}*///broken code
	
	//working code
	/*
	for(int a = 2; a <= input; a++)
	{
		bool Prime = true;
		for(int b = 2; b*b <= a; b++)
		{
			if(a % b == 0)
			{
				Prime = false;
			}
		}
		if(Prime)
		{
			cout << a << endl;
		}	
	
	
	}*/
	
	int primeflag = 1;
	int divisor = 2;
	while(divisor < input)
	{
		int remainder = input % divisor;
		if(remainder == 0(
		{
			primeflag = 0;
			cout << "Failed" << endl;
			
		}
		divisor++;	
	}
	

	return 0;
}
