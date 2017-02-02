//A simple calculator
//This is not working. Trace to fix.

#inlude <iostream>
using namespace std;


int main()
{
	char Choice;
	double First, Second, Answer;
	cout << "Welcome to a calculator" << endl;
	cout << "Please Enter An Option: '+ , - , / , *'" << endl;
	cin >> Choice;
	
	
	if(Choice == '+')
	{
			cout << "You selected Addition" << endl;
			cout << "First Number?" << endl;
			cin >> First;
			cout << "Second Number?" << endl;
			cin >> Second;
			Answer = First + Second;
			cout << First << " + " << Second << " = " << Answer << "." << endl;
	}
	else if(Choice == '-')
	{
			cout << "You selected Subtraction" << endl;
			cout << "First Number?" << endl;
			cin >> First;
			cout << "Second Number?" << endl;
			cin >> Second;
			Answer = First - Second;
			cout << First << " - " << Second << " = " << Answer << "." << endl;
	}
	else if(Choice == '*')
	{
			cout << "You selected Multiplication" << endl;
			cout << "First Number?" << endl;
			cin >> First;
			cout << "Second Number?" << endl;
			cin >> Second;
			Answer = First * Second;
			cout << First << " * " << Second << " = " << Answer << "." << endl;
	}
	else if(Choice == '/')
	{
			cout << "You selected Division" << endl;
			cout << "First Number?" << endl;
			cin >> First;
			cout << "Second Number?" << endl;
			cin >> Second;
			Answer = First / Second;
			cout << First << " / " << Second << " = " << Answer << "." << endl;
	}
	
	
	


	return 0;
}