#include <iostream>
using namespace std;

// function declaration
void beerverse(int);

int main () 
{

	int beers = 99;//99
	
	// function call
	for (int b = beers; b > 0; b--)  //(99,99>0,99--)
	{
		beerverse(b); //complete until 1
	}
	
	return 0;
}

// function definition
void beerverse(int beer) 
{
	if (beer != 1) 
	{
		cout << beer << " bottles of beer on the wall...." << endl;
		cout << beer << " bottles of BEEEEEEEERRRR!!!!@OI#!HO!J" << endl;
	}
	else 
	{
		cout << beer << " bottle of beer on the wall...." << endl;
		cout << beer << " bottle of BEEEEEEEERRRR!!!!@OI#!HO!J" << endl;
	}

	cout << "Take one down, pass it around..." << endl;
	
	beer--;
	
	if (beer != 1) 
	{
		cout << beer << " bottles of beer on the wall!!!!" << endl;
	}
	else 
	{
		cout << beer << " bottle of beer on the wall!!!!" << endl;
	}
	cout << endl;	
	
	return;
}