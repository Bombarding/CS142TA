#include <iostream>
using namespace std;

int main()
{
	//John117 is a 2D array signified by 6x7(MxN)
	int John117[6][7];//0-5,0-6
	
	John117[2][3] = 12;
	
	//cout << a[6][7] << endl; //Fail. Thomas's Privates are a little tingly
	
	for(int i = 0; i<6; i++)
	{
		cout <<"R:" << John117[i];
		for(int u = 0; u<7; u++)
		{
			cout<< John117[i][u]<< " ";
			
		}//end col
		cout << endl;
	}//end row
	//recursively call the 2D array for i(row) < 6 and u(col) < 7
	
	return 0;
}