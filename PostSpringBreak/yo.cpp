#include <iostream>
using namespace std;
/*
	implicit block are blocks that are includes
	in if.while/for statements that do not have braces
	can use no braces for a single statement.
*/


int main()
{
	int x = 3;
	if(x==1)
		cout << x;
	
	if(x==2)
		cout << "a1" << endl;
		cout << "a2" << endl;
	
	

	return 0;
}

/*Exam 2: functions-predefined1.cpp	14-Feb-2017 11:28	413	*/