#include <iostream>
using namespace std;

// function declaration
int dumb(int);
int dumber(int);
int dumberer(int);

int main () 
{

	int y = 1;//1
	int n = 4;//4
	
	// function call
	cout << dumberer(n) << endl;//20
	
	return 0;
}

// function definition
int dumb(int x)//x=4
{
	int n = 5;//n=5
	return n + x;//9
}

int dumber(int n)//9
{
	n = dumb(n);//14
	return ++n;//15
}

int dumberer(int n)//4
{
	int y = dumber(dumb(n)); //y = 14
	return dumb(y);//20
}