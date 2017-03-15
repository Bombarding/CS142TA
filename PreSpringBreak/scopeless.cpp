#include <iostream>
using namespace std;

int scopeless(int &);

int main()
{
	int n = 7;
	cout << n << endl;
	cout << scopeless(n) << endl;
	cout << n << endl;
	
	return 0;
}

int scopeless(int & y)
{
	y = 0;
	return 213;
}

// n --> 7 . (213) . 7
// -----------
// y --> 7 . 0 . Return 213 . (KILL)

/*
Output:
7
213
7
*/