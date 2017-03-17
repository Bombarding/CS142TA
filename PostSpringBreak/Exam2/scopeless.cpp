#include <iostream>
using namespace std;

int scopeless(int &);//passing ref

int main () {
	
	int n = 7; //7
	cout << n << endl;//7
	cout << scopeless(n) << endl;//213
	
	cout << n << endl;//0
	
	return 0;
}

int scopeless(int & y) //n =7
{
	y = 0; // y = 0
	return 213; //213
}

/*out:
7
213
0

*/