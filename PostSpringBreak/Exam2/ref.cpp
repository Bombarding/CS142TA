#include <iostream>
using namespace std;

int main () 
{
	
	int x = 5;
	int y = 6;
	int z = 12;
	
	// Create a reference variable (or an alias)
	// A reference refers to the "address" of a variable
	int & w = z;
	//w = 12
	z = 23; //change z
	//so does w
	//w = 23
	
	cout << z << endl;//23
	cout << w << endl;//23
	cout << endl << endl;
	
	cout << &z << endl; //
	cout << &w << endl; //
	
	
	return 0;
}