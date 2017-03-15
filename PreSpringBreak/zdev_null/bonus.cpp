#include <iostream>
using namespace std;

int main()
{
	int num, a, b, c, d;
	cin >> num;
	
	a = (num/100)*100;
	b = ((num%100)/10)*10;
	c = num - a - b;
	d = a + b + c;
	
	cout << d << endl;
	
	return 0;
}
/*
387
18
~
231
6
*/

/*
1. Infinite Loop Laser Internship
2. Eat what you hate... to extinction
3. F
4. White Wine
*/