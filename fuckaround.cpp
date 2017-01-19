/*
// Created by: Alex Steel
// https://github.com/Bombarding
// fuckaround.cpp
// Testing some stuff for class

*/

/*User information*/

#include <iostream>; //standard library
#include <stdlib.h>; //wait function library
using namespace std;

__author__ = "Alexander Steel";
__version__ = "Version 1.0";
__status__ = "Working";
__link__ = "https://github.com/Bombarding/";

int welcome()
{
	cout << "There is a world out there. One in which we can never reach" << endl;
	cout << "If you could give anything to be there, what would it be?" << endl;
	cout << "If you can figure out the objective, you can figure out anything" << endl;
	cout << "Welcome"
	sleep(1000);
	cout << "." << endl;
	sleep(1000);
	cout << ". ." << endl;
   	sleep(1000);
	cout << ". . ." << endl;
}


int main()
{
	welcome();
	cout << "" << endl;
	cout << "You have now entered the game. Would you like to play or not?" << endl;
	cout << "Press (Y)es or (N)o: " << endl;
	string InitialResponse;
	cin >> InitialResponse;
	if(InitialResponse == "Y")
	{
		cout << "Welcome to the game. Please enter your name: " << endl;
		string PlayerName;
		cin >> PlayerName;
		cout << "Thank you " << PlayerName << ". Good Luck" << endl;
		int RickSanchez;
		RickSanchez = 1337;
		cout << "The variable Rick Sanchez is equal to: " << RickSanchez << endl;
		RickSanchez+=1008;
		int Dreams [] = {1,2,3,4,5};
		cout << "Think of a number between 1 and 5" << endl;
		cout << "We have now created an array holding 5 values" << endl;
		RandomDream = rand() % 5;
		cout << "I suspect your number is: " << RandomDream << ". But I could be wrong" << endl;
		
		
	
	}
	else if(InitialResponse == "N")
	{
		cout << "Peace. Rickki Tikki Taffy Beotch" << endl;
		break;//End this Bitch
	}



	return 0;
}