#include <iostream>
#include <ostream>
#include <fstream>
using namespace std;
//http://www.asciitable.com
int main()
{
	char Paul = 'x';
	Paul += 1;
	cout << Paul << endl;
	cout << (int)Paul << endl; //type casting
	cout << (char)122 << endl;
	//Prints out ascii table array
	for(int i = 0; i < 128; i++)
	{
		cout << i << " " << (char)i << endl;
	}
	
	return 0;
}
/*
A brief History of Computing:
1st commercial computer came around in the 50s
At some point in the 70s, computers got small enough that they could commerically put
computers on a desk.
In the 90s you could buy a new computer for the same price for double ghz

100 mhz
200 mhz
400 mhz
[The Golden Age][Moores Law]
ML meals that every 18 months, computing speed doubled.

why did computers get faster?
1. They got smaller. 
2. Wrote Better Algorithms.
	- algorithm ideas improved
	- exploited the hardware
3. Wider Bus
4. Fewer bridges
5. Manufacturing get better

Computers are flatlining now.

Now that time and distance are relatively the same thing,
Computer

*/