/*
**************************************************
This programs has the user input a number,
	then finds its factors.
**************************************************
*/


#include <iostream.h>

int main()
{
	char Y='y';
	do
	{
		int n;
		int i;
		cout<<""<<endl;
		cout<<"Which number do you want to find the factors of? ";
		cin>>n;
		cout<<"The factors of "<<n<<":"<<endl;
		for (i=1; i<=n; i++)
		{
			if (n%i==0)
			{
				cout<<i<<endl;
			}
		}
		cout<<""<<endl;
		cout<<"Find another number's factors? (y/n)"<<endl;
		cin>>Y;
	}
	while (Y=='y');

	return 0;
}
