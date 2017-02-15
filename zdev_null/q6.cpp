#include <iostream>
using namespace std;

int main()
{
	cout << "Enter n1" << endl;
	double n1, n2;
	cin >> n1;
	cout << "Enter n2" << endl;
	cin >> n2;
	//+5
	
	int n1a = n1;
	int n2a = n2;
	/*double dec1, dec2;
	dec1 = n1 - n1a;
	dec2 = n2 - n2a;*/
	//+5
	
	int ch = 126%10;
	cout << ch << endl;
	
	if(n1 - 0.5 >= n1a)
	{
		n1a += 1;
	}
	if(n2 - 0.5 >= n2a)
	{
		n2a += 1;
	}
	//+5
	int a = n1a * n2a;
	cout << a << endl;
	//+5
	
	return 0;
}
/*
Enter n1
12.2
Enter n2
17.6
216
~
Enter n1
7.6
Enter n2
8.3
64
*/