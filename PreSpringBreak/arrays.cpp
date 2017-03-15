#include <iostream>
using namespace std;

int main()
{	
	int n, n1, n2, n3, n4;
	cout << "Input::" << endl;
	cin >> n;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	
	int sum = n + n1 + n2 + n3 + n4;
	cout << sum/5.0 << endl;
	
	int ak47 [5] = {12,50,69,99,420};
	//int array [n] = {nvals};
	//name = ak47
	//item index = [0|1|2|3|4|5] 
	//item elements = {21,55,99,10231,69}
	//ak47[2] is 99
	cout << ak47[4] << endl;
	
	cout << "" << endl;
	
	int x = 9;
	int a[10];
	a[4] = 710;
	a[5] = x+4;
	x = a[4] + a[5];
	cout << x << endl;
	
	int y = 0;
	int b[10] = {1,2,3,4,5,6};
	
	//zero array of size n
	int c[100] = {0};
	x = 5;
	a[4] = x+7;
	a[6-4] = x-7;
	a[x + 32 % 2 + 17/3 + 90000] = 9; //this will touch thomas's private parts
	
	cout << a[90100] << endl;
	
	/*Result: Segmentation fault*/
	
	//Don't touch thomas's private parts
	
	
	//realize that this is a phresh start.
	//create 4500 sat var
	int sat[4500];
	for(int x = 0; x < 4500; x++)
	{
		cin >> sat[x];
	}
	double avg = 0;
	for(int x = 0; x < 4500; x++)
	{
		avg += sat[x];
	}
	avg /= 4500;
	cout << avg << endl;
	
	return 0;
	
}