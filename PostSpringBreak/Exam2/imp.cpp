#include <iostream>
using namespace std;

int main () 
{
	// Implicit blocks are blocks that are included
	// in if/while/for statements (things with braces)
	// that do not actually have braces. Implicit blocks\
	// can only ever enclose a single statement.
	
	int x = 3;//3
	
	if (x==3)
		cout << "simple" << endl;//simple
	
	if (x == 2)
		cout << "a1" << endl;//a1
		cout << "a2" << endl;
	
	return 0;
}