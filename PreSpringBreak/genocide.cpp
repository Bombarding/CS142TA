//||/////////////////////////////////////////////////////////////////////////||
//||Program Name - Class Stuff (Truncation)									 ||
//||Author - Alex Steel (github.com/Bombarding)								 ||
//||Description - This is a program designed to implement techniques learned ||
//||throughout the week as well as advanced techniques.                      ||
//||/////////////////////////////////////////////////////////////////////////||

#include <iostream>
using namespace std;

int main()
{
	
	int day1, day2, day3;
	cout << "You are a mighty warrior carrying out the act of of certain doom" << endl;
	cout << "Please enter the number of carebears you have killed on day1: " << endl;
	cin >> day1;
	cout << "You have killed " << day1 << " carebears on day1!" << endl;
	cout << "Rickki Tickki Taffy. It is day2." << endl;
	cout << "Please enter the number of carebears you have killed on day2: " << endl;
	cin >> day2;
	cout << "You have killed " << day2 << " carebears on day2!" << endl;
	cout << "wubba lubba dub dub" << endl;
	cout << "Please enter the number of carebears you have killed on day3: " << endl;
	cin >> day3;
	cout << "You have killed " << day3 << " carebears on day3!" << endl;
	
	int total = day1+day2+day3;
	cout << "The total number of carebears you have killed after 3 days is: " << total << endl;
	cout << "Nuke em all. I like kicking ass and chewing bubblegum, and im all out of bubblegum." << endl;
	
	return 0;
	
}