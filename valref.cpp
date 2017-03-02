#include <iostream>
using namespace std;

int c (int &, int);

int main () 
{
	int s = 2, r = 4; //setup initially s = 2 and r = 4
	cout << c(s,r) << endl; // 7
	cout << s << endl; // 3
	cout << r << endl; // 4
}

int c (int & w, int q) //c(s,r) w = s = 2, q = 4
{
	w++; //w = s = 3
	return w + q; //3+4 = 7	
}