#include <iostream>
using namespace std;

// function declaration
void beerverse(int);

int main () {
	
	int beers = 99;
	
	// function call
	for (int b = beers; b > 0; b--) {
		beerverse(b);
	}
	
	return 0;
}

// function definition
void beerverse (int beer) {
	if (beer != 1) {
		cout << beer << " bottles of beer on the wall... " << endl;
		cout << beer << " bottles of BEEEEERRR!!!!" << endl;
	}
	else {
		cout << beer << " bottle of beer on the wall... " << endl;
		cout << beer << " bottle of BEEEEERRR!!!!" << endl;
		
	}
	
	cout << "Take one down, pass it around.... " << endl;
	
	beer--;
	
	if (beer != 1) {
		cout << beer << " bottles of beer on the wall!!!!!!@!" << endl;
	}
	else {
		cout << beer << " bottle of beer on the wall!!!!!!@!" << endl;
	}
	cout << endl;	

	return;
}