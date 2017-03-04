// Avery Cheatham
// AR Smith

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void manager (int, int, int, int, int, int, float);
void supplier (int & , int & ,  int & );
float robber (float &);
float customer (int , int & , int , int & , int , int & , float &);
void bum(int , int & , int , int & , int , int & );

int main () {
srand (time(0));
char person;
int hi = 100;
int ci = 100;
int mi = 100;
int hs = 0;
int cs = 0;
int ms = 0;

float cash = (hs * 13.27) + (cs * 24.29) + (ms * 17.00);

cout << "Hello are you a customer (C), manager (M), supplier (S), robber (R), bum (B), or is the store closed (Q)?" << endl;
cin >> person;

while ( person != 'Q'){
	if (person == 'C'){
			customer (hi, hs, ci, cs, mi, ms, cash);
			cout << "Hello are you a customer (C), manager (M), supplier (S), robber (R), bum (B), or is the store closed (Q)?" << endl;
			cin >> person;
			}
	else if (person == 'M'){
			manager (hi, ci, mi, hs, cs, ms, cash);
			cout << "Hello are you a customer (C), manager (M), supplier (S), robber (R), bum (B), or is the store closed (Q)?" << endl;
			cin >> person;
			}
	else if (person == 'S'){
			supplier (hi, ci, mi);
			cout << "Hello are you a customer (C), manager (M), supplier (S), robber (R), bum (B), or is the store closed (Q)?" << endl;
			cin >> person;
				}
	else if (person == 'R'){
			robber(cash);
			cout << "Hello are you a customer (C), manager (M), supplier (S), robber (R), bum (B), or is the store closed (Q)?" << endl;
			cin >> person;
				}
	else if (person == 'B') {
			bum(hi, hs, ci, cs, mi, ms);
			cout << "Hello are you a customer (C), manager (M), supplier (S), robber (R), bum (B), or is the store closed (Q)?" << endl;
			cin >> person;
				}			
	}
	cout << "Sorry the store is closed." << endl;
		
	
return 0;
}

void manager (int hi, int ci, int mi, int hs, int cs, int ms, float cash){

cout << "         " << "Hashbrowns" << " " << "Coke" << " " << "Machetes" << endl;
cout << "Inventory   " << hi << "     " << ci << "     " << mi << endl;
cout << "Sold         " << hs << "       " << cs << "       " << ms << endl;
cout << "Remaining   " << hi-hs << "     " << ci-cs << "     " << mi-ms << endl;

cout << "Total Money $" << cash << endl;
cout<< "" << endl;

return;
}

void supplier (int & h, int & c, int & m){

int h1=0;
int c1=0;
int m1=0;


cout << "How many more hashbrowns have you brought?" <<endl;
cin >> h1;
cout << "How many more cokes have you brought?" <<endl;
cin >> c1;
cout << "How many more machetes have you brought?" <<endl;
cin >> m1;
cout << "Thank you come again." <<endl;
cout<< "" << endl;

h = h + h1;
c = c + c1;
m = m + m1;

return;
}

 float robber (float & cash){

float x = cash;

cout << "A robber stole all of our money!" << endl;
cout<< "" << endl;

cash = 0;

 return x;
}

float customer (int hi, int & hs, int ci, int & cs, int mi, int & ms, float & cash){

int hashbrowns=0;
int cokes=0;
int machetes=0;
float cash1=0;
int hr = hi-hs;
int cr = ci-cs;
int mr = mi-ms;

	cout << "How many hashbrowns would you like?" << endl;
	cin >> hashbrowns;
	
		while( hashbrowns > hr){
			cout << "We ain't got that much. How many hashbrowns do you want?" << endl;
			cin >> hashbrowns;
				}
	cout << "Ok. How many cokes?" << endl;
	cin >> cokes;

		while( cokes > cr){
			cout << "We ain't got that much. How many cokes do you want?" << endl;
			cin >> cokes;
				}
	cout << "Ok. How many machetes would you like?" << endl;	
	cin >> machetes;
		while( machetes > mr){
			cout << "We ain't got that much. How many machetes do you want?" << endl;
			cin >> machetes;
				}		
					
	cash1 = (hashbrowns * 13.27) + (cokes * 24.29) + (machetes * 17.00);
	cash = cash + cash1;
	
	hs = hs + hashbrowns;
	cs = cs + cokes;
	ms = ms + machetes;

	cout << "Alright your total will be $" << cash1 << endl;	
	cout<< "" << endl;
	
	return cash;
}

void bum(int hi, int & hs, int ci, int & cs, int mi, int & ms){

	int hr = hi-hs;
	int cr = ci-cs;
	int mr = mi-ms;

	int h = 3 + rand() % (17 - 3 + 1);
	int c = 2 + rand() % (9 - 2 + 1);
	int m = 4 + rand() % (7 - 4 + 1);
	
	cout << "A bum ate a bunch of our food!" <<endl;
	cout<< "" << endl;
	
	if(h > hr){
		h=hr;
		}
	if(c > cr){
		c=cr;
		}	
	if(m > mr){
		m=mr;
		}		
	hs = hs + h;
	cs = cs + c;
	ms = ms + m;
	
	return;
}