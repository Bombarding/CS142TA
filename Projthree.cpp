//Alex Steel
//January 31st 2017
//Project 3: Chains, Chains, Go Away, Come Again Another Day
//Write a program that translates an integer number to its roman numeral equivalent
//i.e 493 = CDXCIII or 3896 = MMMDCCCXCVI

#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	char Repeat;
	do
	{
		cout << "*** Welcome to Rome. Population 1. ***" << endl;
		cout << "I have been here a long time. Just ask the God. He who shalt not be named.... Goop" << endl;
		cout << "Welcome user to the game. Numbers are funny thing when they are..... Roman." << endl;
		sleep(3);
		cout << "The game will now begin." << endl;
		sleep(2);
		string player;
		cout << "What is your name Legionare?" << endl;
		cin >> player;
		cout << "Welcome to Rome: " << player << endl;
		cout << "We would like to tell you a number in our system. Any number" << endl;
		cout << "Thou shalt type, shall hence forth be of Roman Equivilant" << endl;
		sleep(1);
		cout << "." << endl;
		sleep(1);
		cout << ". ." << endl;
		sleep(1);
		cout << ". . ." << endl;
		cout << "" << endl;
		int input;
		cout << "What is the number you would like to translate?" << endl;
		cin >> input;
		cout << "Computing Calculations: " << player << endl;
		sleep(1);
		cout << ". . ." << endl;
		sleep(1);
		cout << ". ." << endl;
		sleep(1);
		cout << "." << endl;
		
		int Centurion; //M
		int Optio; //C
		int Tesserarius;//X
		int Decurio;//I
		
		Centurion = (input/1000);
		input = input % 1000;
		Optio = (input/100);
		input = input % 100;
		Tesserarius = (input/10);
		input = input % 10;
		Decurio = (input/1);
		input = input % 1;
		
		cout << "We have calculated that your number is:" << endl;
		//M
		if(Centurion > 0)
		{
			int Boxcutter = 0; //variable holder
			while(Boxcutter<Centurion)
			{
				cout << "M";
				Boxcutter++;
			}
		}
		//C
		if(Optio == 4)
		{
			cout << "CD";
			
		}
		else if(Optio == 5)
		{
			cout << "D";
		}
		else if(Optio < 0 && Optio < 4)
		{
			int Boxcutter = 0;
			while(Boxcutter < Optio)
			cout << "C";
			Boxcutter++;
		}
		else if(Optio == 9)
		{
			cout << "CM";
		}
		else if(Optio > 5 && Optio < 9)
		{
			cout << "D";
			int Boxcutter = 0;
			while (Boxcutter < Optio - 5)
			{
				cout << "C";
				Boxcutter++;
			}
		}
		//X
		if(Tesserarius == 4)
		{
			cout << "XL";
		}
		else if(Tesserarius == 5)
		{
			cout << "L";
		}
		else if(Tesserarius > 0 && Tesserarius < 4)
		{
			int Boxcutter = 0;
			while(Boxcutter < Tesserarius)
			{
				cout << "X";
				Boxcutter++;
			}
		}
		else if(Tesserarius == 9)
		{
			cout << "XC";
		}
		else if( Tesserarius > 5 && Tesserarius < 9)
		{
			cout << "L";
			int Boxcutter = 0;
			while(Boxcutter < Tesserarius - 5)
			{
				cout << "X";
				Boxcutter++;
			}
		}
		//I
		if(Decurio == 4)
		{
			cout << "IV";
		}
		else if(Decurio == 5)
		{
			cout << "V";
		}
		else if(Decurio > 0 && Decurio < 4)
		{
			int Boxcutter = 0;
			while(Boxcutter < Decurio)
			{
				cout << "I";
				Boxcutter++;
			}
		}
		else if(Decurio == 9)
		{
			cout << "IX";
		}
		else if(Decurio > 5 && Decurio < 9)
		{
			cout << "V";
			int Boxcutter = 0;
			while(Boxcutter < Decurio - 5)
			{
				cout << "I";
				Boxcutter++;
			}
		}
		
		cout << "" << endl;
		cout << "" << endl;
		cout << "Would you like to play again? (y/n) "<< endl;
		cin>>Repeat;
		cout << "" << endl;
		if((Repeat == 'n') || (Repeat == 'N'))
		{	
			cout << "When in Rome..." << endl;
			sleep(5);
		}
		else if((Repeat == 'y') || (Repeat == 'Y'))
		{
			cout << "Do as the Romans..." << endl;
			sleep(5);
		}
	}while((Repeat == 'y') || (Repeat == 'Y'));
	
	return 0;


}

/*

*** Welcome to Rome. Population 1.
I have been here a long time. Just ask the God. He who shalt not be named.... Goop
Welcome user to the game. Numbers are funny thing when they are..... Roman.
The game will now begin.
What is your name Legionare?
Boxcutter
Welcome to Rome: Boxcutter
We would like to tell you a number in our system. Any number
Thou shalt type, shall hence forth be of Roman Equivilant
.
. .
. . .

What is the number you would like to translate?
3896
Computing Calculations: Boxcutter
. . .
. .
.
We have calculated that your number is:
MMMDCCCXCVI

Would you like to play again? (y/n) 
n

When in Rome...

*/