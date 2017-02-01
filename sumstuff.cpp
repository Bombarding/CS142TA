#include <iostream>
using namespace std;

int main () {
	
	// Print the numbers from 1 to 10
	
	int printnext = 1;
	while (printnext <= 10) {
		cout << printnext << endl;
		printnext = printnext + 1;
	}
	cout << endl;
	
	// Sum the numbers from 1 to 10
	int sumnext = 1;
	int running_sum = 0;
	while (sumnext <= 10) {
		// keep adding numbers
		// the extra special magic sauce
		running_sum = running_sum + sumnext;
		cout << running_sum << endl;
		sumnext++;
	}
	
	cout << "Your total is: " << running_sum << endl;
	
	return 0;
}