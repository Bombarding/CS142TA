#include <iostream>
#include <ostream>
#include <fstream>
using namespace std;

int main()
{
	//ofstream is an output file stream. Moving from memory to file
	//ifstream is an input file stream. Moving from file to memory
	ofstream RubixCube;
	RubixCube.open("times.txt");
	cout << "Beat People With a Frying Pan" << endl;
	int ChimmyChanga = 5;
	RubixCube << ChimmyChanga << " times" << endl;
	RubixCube.close();
	
	
	return 0;
}

/*
Notes:
Stream object is an object that does something in particular.
The purpose of Stream object is to transfer data from one place to another.
1. Input/Output stream object. aKa (IOstream) 
cout --> RAM --> Screen
cin --> Screen --> RAM
2. File Stream object. aKa (FStream)
input --> file --> RAM
output --> RAM --> file

*/