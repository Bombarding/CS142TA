/////////////////////////////////////////////////////////////////
// Created By Alex Steel
// Program #2 - Crazy Rabbit, aka Alice in Wonderland
// Program Description:
// The crazy rabbit will tell you how late he is in a number of minutes.
// If the crazy rabbit tells you that you are 133.5 minutes late,
// you need to tell him that he is 2 hours and 13.5 minutes late,
// bonus points awarded for 2 hours, 13 minutes and 30 seconds late.
/////////////////////////////////////////////////////////////////

#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	char Repeat;
	do
	{
	cout << "*** Welcome to Wonderland. Population 1." << endl;
	cout << "I have been here a long time. I always find a way back." << endl;
	cout << "Welcome user to the game. Time stops for all attempting to work." << endl;
	sleep(3);
	cout << "The game will now begin." << endl;
	sleep(2);
	string player;
	cout << "What is your name rook?" << endl;
	cin >> player;
	cout << "Welcome to Wonderland: " << player << endl;
	cout << "Please answer the following question accurately" << endl;
	sleep(1);
	cout << "." << endl;
	sleep(1);
	cout << ". ." << endl;
	sleep(1);
	cout << ". . ." << endl;
	cout << "" << endl;
	float minutes;
	cout << "Silly Rabbit, how many minutes late were you today?" << endl;
	cin >> minutes;
	cout << "Computing Calculations: " << player << endl;
	sleep(1);
	cout << ". . ." << endl;
	sleep(1);
	cout << ". ." << endl;
	sleep(1);
	cout << "." << endl;
	cout << "" << endl;
	double Rick = minutes / 60; //hours = minutes*60
	int Sanchez = Rick; // h = hours
	double Master = Rick - Sanchez; // temp1 = hours - h
	double Blaster = Master * 60; // temp2 = temp1*60
	int Snowman = Blaster; // temp3 = temp2
	double Pro = Blaster - Snowman; // seconds = temp2 - temp3
	double Kraken = Pro * 60; // sec = seconds * 60
	double MVP = Kraken; // s = sec
	cout << "You are " << Sanchez << " hours, " << Snowman << " minutes, and " << MVP << " seconds late!" << endl;
	cout << "You now recieve the following information:" << endl;
	sleep(3);
	if (Rick >= 20) 
	{
		cout << "You waited that long? Hahahahaha." << endl;
		sleep(2);
		cout << "You will be stuck here a long time..." << endl;
	}
	if ((Rick < 20) && (Rick >= 10)) 
	{
		cout << "He's sick, man. He's like totally sick. Droopy ears and everything." << endl;
		sleep(2);
		cout << "Let's try and make it a little bit faster next time..." << endl;
	}
	if ((Rick < 10) && (Rick >= 5)) 
	{
		cout << "Dude, you've been totally stood up. Loser." << endl;
		sleep(2);
		cout << "Getting closer..." << endl;
	}
	if ((Rick < 5) && (Rick >= 2)) 
	{
		cout << "Mr. Rabbit is not the rabbit you are looking for." << endl;
		sleep(2);
		cout << "Maybe he hippity hopped into a clock..." << endl;
	}
	if ((Rick < 2) && (Rick >= 1)) 
	{
		cout << "Mr. Rabbit had a personal problem involving pants; he will arrive shortly." << endl;
		sleep(2);
		cout << "Messing with time is such difficult magic..." << endl;
	}	
	if (Rick < 1) 
	{
		cout << "Mr. Rabbit is on his way. Deal." << endl;
		sleep(2);
		cout << "Mr. Rabbit has shown exceptional time mastery..." << endl;
	}
	
	cout << "" << endl;
	cout << "Would you like to play again? (y/n) "<< endl;
	cin>>Repeat;
	cout << "" << endl;
	if((Repeat == 'n') || (Repeat == 'N'))
	{	
		cout << "Looks like someone had a bad time in wonderland..." << endl;
		sleep(5);
	}
	else if((Repeat == 'y') || (Repeat == 'Y'))
	{
		cout << "Restarting Wonderland..." << endl;
		sleep(5);
	}
	}while((Repeat == 'y') || (Repeat == 'Y'));
	
	return 0;
	

}