#include <iostream>
using namespace std;

int main () {
	
	// a is a two dimensional array with 6 rows and 7 columns
	int a[6][7];
	
	a[2][3] = 12;
	
	// Don't visit Thomas's private parts. This doesn't do what you want
	// cout << a[6][7] << endl;
	
	// Print out a two dimensional array
	for (int row = 0; row < 6; row++) {
		for (int col = 0; col < 7; col++) {
			cout << a[row][col] << " ";
		} // end col for
		cout << endl;
	} // end row for
	
	return 0;
}