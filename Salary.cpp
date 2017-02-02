#include <iostream>
using namespace std;

int main () {
	
	double yearly_salary;
	int years;
	double cum_salary = 0;
	
	cout << "Type in your yearly salary: ";
	cin >> yearly_salary;
	cout << "Type in number of years worked: ";
	cin >> years;
/*	
	cout << "Year              Cur Salary           Cum Salary" << endl;
	int y = 1;
	while (y <= years) {
		cum_salary = cum_salary + yearly_salary;
		cout << y << "        " << yearly_salary << "          " << cum_salary << endl;
		y++;
	}
*/

	cum_salary = 0; // only done to "reset" the variable for this example
	
	// for loop!!!!
	cout << "Year	CurSalary	CumSalary" << endl;
	for (int y = 1; y <= years; y++) 
	{
		if(y == 4)
		{
			continue;//skips an iteration
		}
		
		cum_salary = cum_salary + yearly_salary;
		cout << y << "        " << yearly_salary << "          " << cum_salary << endl;
		
		//break ups are hard (Break after 8)
		if(y == 8)
		{
			break;
		}
	//Raise me up
	yearly_salary *= 0.9;
	}
	
	
	
	return 0;
}