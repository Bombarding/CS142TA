#include <iostream>
using namespace std;

int b (int, int); //(int,int)
int c (int &, int);//(ref,int)

int main () 
{
	int s = 2, r = 4; //s = 2, r = 4
	cout << b(r, c(s,r)) << endl;
	cout << s << endl;
	cout << r << endl;
}

int b (int t, int y) //t = r = 4, y = 7
{
	y++;
	return t - y;

}

int c (int & w, int q) //s = w = 2, q = r = 4
{
	w++; //w = 3
	return w + q; = 7	
}