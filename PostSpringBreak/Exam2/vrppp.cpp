#include <iostream>
using namespace std;

int a(int, int);//(val,val)
int b(int, int);//(val,val)
int c (int &, int);//(ref,val)

int main () {

	int s = 2, r = 4;//init
	cout << a(s, b(r, c(s,r+s))) << endl;//c(s,6)=9 //b(r,9)=-6 //a(3,-6)
	cout << s << endl;//3
	cout << r << endl;

	return 0;
}

int a(int d, int h)//(3,-6)
{//h=-6,d=-12
	d = h + h; //d = -12
	return b(h,d) + c(h, d+h);//5+
}

int b (int t, int y) //(4,9) //b(-6,-12)
{
	y++;//10 //-11
	return t - y;//-6 //5
}

int c (int & w, int q) //(s,6) //c(h,-18)
{
	w++;//s = 3 //h = -10
	return w + q; //9 = r // -18
}

/*
out:
-18
3
4
*/