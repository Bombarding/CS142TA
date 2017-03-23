#include <iostream>
using namespace std;
// This program tests your understanding of recursive functions

int f(int n);

int main () 
{
	
	int n = 4;
	cout << f(n) << endl;
	return 0;
}

int f(int n) 
{
	if (n < 2)
	{
		return 7*n;
	}
	return f(n-1) * f(n/2);
}

/*
n = 4
call f_0 = f(n) --> n=4 --> f(4)
if(n<2) NoSoSkip.
return f_1 = [343] * f_2 = [49]
f_1 --> n-1 --> 3
if(n<2) NoSoSkip
return f_3 = [49] * f_4 = [7] = 343
f_3 --> n-1 --> 2
if(n<2) NoSoSkip.
return f_5 = [7] * f_6 = [7] = 49
f_5 --> n-1 --> 1
return 7*1
if(n<2) Yes
return f_7 = [7] * f_8 = [7] = 49


out:
return f_1 = [343] * f_2 = [49] = 16807
*/