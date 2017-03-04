/////////////////////////////////////////////////////////////////
// Created By Alex Steel
// Program #4 - The Machete Kid Returns
// Program Description:
// So apparently, white rabbits get hungry. And when they do
// they send their lackeys over to get some eats from the anglo saxon castle 
// drug store. All kinds of big wigs from South America go there
// It must have nothing to do with anything illegal... Right?
/////////////////////////////////////////////////////////////////

#include <unistd.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void manager (int, int, int, int, int, int, float);
void supplier (int & , int & ,  int & );
float robber (float &);
float customer (int , int & , int , int & , int , int & , float &);
void bum(int , int & , int , int & , int , int & );

int main() 
{
	srand (time(0));
	char input;
	int hashinv = 100;
	int cokeinv = 100;
	int machinv = 100;
	int hashsold = 0;
	int cokesold = 0;
	int machashsoldold = 0;

	float cash = (hashsold * 13.27) + (cokesold * 24.29) + (machashsoldold * 17.00);
	cout << "Hello, some of my friends call me Bombarding..." << endl;
	sleep(3);
	cout << "But everyone knows me for my ak^47..." << endl;
	sleep(3);
	cout << "Well, I guess let us try to do some input." << endl;
	sleep(3);
	cout << "Please tell me what kind of input you really are, unless you are one of the Dark Ones like myself..." << endl;
	cout << "Customer(C), Manager(M), Supplier(S), Robber(R), Bum(B) or Quit(Q)?" << endl;
	cin >> input;
	while(input != 'Q')
	{
		if (input == 'C')
		{
			customer (hashinv, hashsold, cokeinv, cokesold, machinv, machashsoldold, cash);
			cout << "There are other drugs out there" << endl;
			cin >> input;
		}
		else if (input == 'M')
		{
			manager (hashinv, cokeinv, machinv, hashsold, cokesold, machashsoldold, cash);
			cout << "Instead of chasing the dragon" << endl;
			cin >> input;
		}
		else if (input == 'S')
		{
			supplier (hashinv, cokeinv, machinv);
			cout << "Become the dragon" << endl;
			cin >> input;
		}
		else if (input == 'R')
		{
			robber(cash);
			cout << "Expand your mind" << endl;
			cin >> input;
		}
		else if (input == 'B') 
		{
			bum(hashinv, hashsold, cokeinv, cokesold, machinv, machashsoldold);
			cout << "Third eYe" << endl;
			cin >> input;
		}			
	}
	cout << "Sorry the store is closed." << endl;	
	return 0;
}

void manager (int hashinv, int cokeinv, int machinv, int hashsold, int cokesold, int machashsoldold, float cash)
{
	cout << "         " << "Hashbrowns" << " " << "Cocaine" << " " << "Machetes" << endl;
	cout << "Inventory   " << hashinv << "     " << cokeinv << "     " << machinv << endl;
	cout << "Sold         " << hashsold << "       " << cokesold << "       " << machashsoldold << endl;
	cout << "Remaining   " << hashinv-hashsold << "     " << cokeinv-cokesold << "     " << machinv-machashsoldold << endl;
	cout << "Total Money $" << cash << endl;
	cout<< "" << endl;
	return;
}

void supplier(int & h, int & c, int & m)
{
	int h1=0;
	int c1=0;
	int m1=0;
	cout << "Rick loves a little toke" <<endl;
	cin >> h1;
	cout << "A line or two for me and you will do" <<endl;
	cin >> c1;
	cout << "Kill all humans" <<endl;
	cin >> m1;
	cout << "Wubba Lubba Dub Dub" <<endl;
	cout<< "" << endl;
	h = h + h1;
	c = c + c1;
	m = m + m1;
	return;
}

float robber(float & cash)
{
	float x = cash;
	cout << "Hello El Zilcho" << endl;
	cout << "" << endl;
	cash = 0;
 	return x;
}

float customer (int hashinv, int & hashsold, int cokeinv, int & cokesold, int machinv, int & machashsoldold, float & cash)
{
	int hashbrowns=0;
	int cokes=0;
	int machetes=0;
	float cash1=0;
	int hr = hashinv-hashsold;
	int cr = cokeinv-cokesold;
	int mr = machinv-machashsoldold;
	cout << "*Tweak* Want some weed bro?" << endl;
	cin >> hashbrowns;
	while(hashbrowns > hr)
	{
		cout << "Nah, i aint floating that much, try again" << endl;
		cin >> hashbrowns;
	}
	cout << "Yo, this blow is fucking amazing" << endl;
	cin >> cokes;
	while(cokes > cr)
	{
		cout << "I wish, i did a little thashinvs morning" << endl;
		cin >> cokes;
	}
	cout << "What are you, a Termachinvnator" << endl;	
	cin >> machetes;
	while(machetes > mr)
	{
		cout << "No RPG's, try again" << endl;
		cin >> machetes;
	}						
	cash1 = (hashbrowns * 13.27) + (cokes * 24.29) + (machetes * 17.00);
	cash = cash + cash1;
	hashsold = hashsold + hashbrowns;
	cokesold = cokesold + cokes;
	machashsoldold = machashsoldold + machetes;
	cout << "Betta have my money when I come to collect $" << cash1 << endl;
	cout << "Pay Up";
	cout << "Pay Up";
	cout << "Pay Up";
	cout << "I throw that brick in yo face, now what you gonna do wit it?" << endl;
	cout<< "" << endl;
	return cash;
}

void bum(int hashinv, int & hashsold, int cokeinv, int & cokesold, int machinv, int & machashsoldold)
{
	int hr = hashinv-hashsold;
	int cr = cokeinv-cokesold;
	int mr = machinv-machashsoldold;
	int h = 3 + rand() % (17 - 3 + 1);
	int c = 2 + rand() % (9 - 2 + 1);
	int m = 4 + rand() % (7 - 4 + 1);
	cout << "Wow, i just ate some acokeinvd. Let the games begin" <<endl;
	cout<< "" << endl;
	if(h > hr)
	{
		h=hr;
	}
	if(c > cr)
	{
		c=cr;
	}	
	if(m > mr)
	{
		m=mr;
	}		
	hashsold = hashsold + h;
	cokesold = cokesold + c;
	machashsoldold = machashsoldold + m;
	return;
}

/*
Hello, some of my friends call me Bombarding...
But everyone knows me for my ak^47...
Well, I guess let us try to do some input.
Please tell me what kind of input you really are, unless you are one of the Dark Ones like myself...
Customer(C), Manager(M), Supplier(S), Robber(R), Bum(B) or Quit(Q)?
C
*Tweak* Want some weed bro?
99
Yo, this blow is fucking amazing
99
What are you, a Termachinvnator
99
Betta have my money when I come to collect $5401.44
Pay UpPay UpPay UpI throw that brick in yo face, now what you gonna do wit it?

There are other drugs out there
M
         Hashbrowns Cocaine Machetes
Inventory   100     100     100
Sold         99       99       99
Remaining   1     1     1
Total Money $5401.44

Instead of chasing the dragon
*/