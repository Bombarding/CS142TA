// Ankur Gupta

#include <iostream>
using namespace std;

int main() {
	
	cout << "Taylor Swift likes chicken" << endl;
	cout << "1989 exists" << " blah"
		 << "is it the best?"
		 << "of course not" << endl;
	
	// This is a variable declaration.
	int a;
	
	// Use 'dem variables.
	a = 4;
	a = 5;
	
	// Multiple variables.
	int b, c;
	b = 7; 
	
	// #math
	c = b + 3;
	c = a + b + 2;
	
	cout << c << endl;
	cout << "c" << endl;
	
	// other basic #math
	b = a - c;
	a = 2 * b;
	a = b / -1;
	
	cout << a << endl;
	
	// Order of operations is a thing
	b = a + c * 2;
	cout << b << endl;

	// Parenthesis are also a thing
	b = (a + c) * 2;
	cout << b << endl;
	
	// Exciting questions!
	int q = 1;
	q = q + 2;
	q = q - 2;
	q = q * 4;
	q = q / 2;
	
	cout << q << endl;
	
	// Shortcuts for the above
	q += 2;
	q -= 2;
	q *= 4;
	q /= 2;
	
	cout << q << endl;
	
	// user input
	int age;
	cout << "Type in your age, you potential creeper: ";
	cin >> age;
	
	int dateable;
	dateable = age/2 + 7;
	cout << "Your dateable age is " << dateable << "." << endl;
	
	return 0;
}