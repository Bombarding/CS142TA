#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	cout << "*** Welcome to the beer song. Currently we have 99 bottles of beer." << endl;
	int beer = 5;
	while(beer > 0)
	{
		cout << beer << " bottles of beer on the wall, " << beer << " bottles of beer!" << endl;
		cout << "" << endl;
		cout << "Take one down, pass it around, ";
		beer--; 
		cout << beer << " bottles of beer on the wall!" << endl;
		sleep(1);
		cout << "" << endl;
	}
	
	
	return 0;
}