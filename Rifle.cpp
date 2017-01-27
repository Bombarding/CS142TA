#include <iostream>
using namespace std;

int main()
{
	cout << "Welcome to the game. This is a continuation of things we have already researched" << endl;
	cout << "Please enter your name: " << endl;
	string name;
	cin >> name;
	cout << "Welcome, " << name << " to the game. This is for fucking around." << endl;
	if(name == "Alex")
	{
		cout << "What the fuck are you doing here, you have already completed this. " << endl;
		
	}
	else
	{
		cout << "Welcome to the beer song xD" << endl;
		int beers = 99;
		while (beers > 0) 
		{
			if (beers == 1) 
			{
				cout << beers << " bottle of beer on the wall" << endl;
				cout << beers << " bottle of BEEEER!!!" << endl;
			}
			else 
			{
				cout << beers << " bottles of beer on the wall" << endl;
				cout << beers << " bottles of BEEEER!!!" << endl;
			}
			cout << "Take one down, pass it around..." << endl;
			if (beers == 2) 
			{
				cout << --beers << " bottle of beer on the wall" << endl;
			}
			else 
			{
				cout << --beers << " bottles of beer on the wall." << endl;
			}
	
			cout << endl;
			cout << "<hic> Where the hell's the beer?" << endl;
		}
	}
	return 0;
}