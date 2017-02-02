////***************************************************************************
// This program asks for two integers, and finds the sun of all the integers
// from the first integer to the second, but doesn't add a certain type of
// of integer if the user chooses.
//*****************************************************************************

#include <iostream.h>

int main()
{
	int ft,lt;
	char Y;
	
	cout<<""<<endl;
	cout<<"**Welcome to the sum program.**"<<endl;
	cout<<""<<endl;
	cout<<"What is the first term? ";
	cin>>ft;
	cout<<"What is the second term? ";
	cin>>lt;
	cout<<"Do you want any integers in between to not be added in? (y/n) ";
	while (Y!='y' && Y!='n')
	{
		cin>>Y;
		if (Y!='y' && Y!='n')
		{
			cout<<"Type y or n. ";
			cin>>Y;
		}
	}
		if (Y=='y')
		{
			int m;
			
			cout<<"What multiples do you not want added in? ";
			cin>>m;
			if (m<ft || m>lt)
			{
				cout<<""<<endl;
				cout<<"There aren't any multiples of "<<m<<" from "<<ft<<" to "<<lt<<"."<<endl;
			}
			int i;
			int sum=0;
			for (i=ft;i<=lt;i++)
			{
				if (i%m!=0)
				{
					sum=sum+i;
				}	
			}
			cout<<""<<endl;
			cout<<"The sum off all the numbers from "<<ft<<" to "<<lt<<endl;
			cout<<"without adding in the multiples of "<<m<<" is "<<sum<<"."<<endl;
		}

		else if (Y=='n')
		{
			double sum;
			double n=lt-ft+1;
			sum=(n/2)*(ft+lt);
			cout <<"The sum of all the numbers from "<<ft<<" to "<<lt<<" is "<<sum<<"."<<endl;
		}
		
		
		return 0;
}
