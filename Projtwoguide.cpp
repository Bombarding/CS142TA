// Name
// Friday January 27th
// Project 2: Alice in Chains... Land
// The crazy rabbit will tell you how late he is in a number of minutes.
// If the crazy rabbit tells you that you are 133.5 minutes late,
// you need to tell him that he is 2 hours and 13.5 minutes late,
// bonus points awarded for 2 hours, 13 minutes and 30 seconds late.

#include <iostream>
#include <unistd.h>
using namespace std;

int main() 
{
 	
 	//Remember, we are inputing a total number of minutes, and asking for it to return
 	//the number of hours. Lets start with input of minutes
 	double input;
 	cout << "How late are you Mr. Rabbit? " << endl;
	cin >> input;
	
	// Computing Calulations
	// Is the number of minutes in an hour really hour mod 60?
	// % Calculates the remainder when one number is divided by another.
	// 60 % 10 = 0 (10 into 60, 6 times, with remainder 0, so value is 0)
	//minutes = hours % 60;
	//seconds = minutes % 60;

	
	//so now we have calulated the number of hours, we need to store it
	double hours = input / 60;
	int hour = hours;
	//next we must calculate the number of minutes and store it
	double time = hours - hour;
	double spent = time * 60;
	double minutes = spent;
	//finally, we must calculate the number of seconds, and store it
	//double second = spent - minutes;
	//double sec = second * 60;
	//double seconds = sec;
	
	cout << "You are " << hours << " hours, " << minutes << " minutes, and " << /*seconds*/ "seconds late!" << endl;

	if (hours >= 20) 
	{
		cout << "You waited that long? Hahahahaha." << endl;
		cout << "You will be stuck here a long time..." << endl;
	}
	if ((hours < 20) && (hours >= 10)) 
	{
		cout << "He's sick, man. He's like totally sick. Droopy ears and everything." << endl;
		cout << "Let's try and make it a little bit faster next time..." << endl;
	}
 	cout << "Hope this helps" << endl;
	return 0;
}

/*
How late are you Mr. Rabbit? 
133.5
You are 2.225 hours, 13.5 minutes, and seconds late!
Hope this helps
*/