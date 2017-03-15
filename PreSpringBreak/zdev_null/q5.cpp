#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	while(n < 118)
	{
		if ((n > 3) && (n < 7))
		{
			cout << "Green ";
			n += 116;
			continue;
		}
		else if(n < 5)
		{
			cout << "Red ";
			n += 5;
		}
		cout << "Purple!" << endl;
	}


	return 0;
}
/*Red Purple!*/

//misprint -2
//while loop error -2
//if(n>3&&n,7) error -2
//else if error -2
//cout error -2
//attempt +5
//no attempt -15