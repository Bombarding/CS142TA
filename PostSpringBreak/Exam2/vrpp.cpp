#include <iostream>
using namespace std;

int b (int, int); //(val,val)
int c (int &, int); //(ref,val)

int main () {

	int s = 2, r = 4;//initialize
	cout << b(r, c(s,r)) << endl;//b(4,7) //out:-4
	cout << s << endl;//out:3
	cout << r << endl;//out:4
}

int b (int t, int y) //(4,7)
{
	y++;//8
	return t - y;//-4

}

int c (int & w, int q) //(s,4)
{
	w++;//s++ = 3//s
	return w + q;//3+4=7
}
