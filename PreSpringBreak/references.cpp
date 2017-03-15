#include <iostream>
using namespace std;

int main()
{
	int x = 6;
	int y = 17;
	int z = 12;
	
	//create a reference variable or alias
	//a reference refers to the address of the variable
	
	int & w = z; //w == z (= 12)
	
	z = 23; //change z to 23, alternatively changing w
	
	cout << z << endl;
	cout << w << endl;
	cout << &z << endl;
	cout << &w << endl;
	return 0;
}