#include <iostream>
#include <math.h>
using namespace std;

double getrekt(double, double);

int main()
{

	int len = 7;
	double wid = 12.3;
	
	double perm;
	perm = getrekt(len, wid);
	cout << perm << endl;
	
	return 0;
}

double getrekt(double x, double y)
{
	double answer = 2*x + 2*y;
	return answer;
	//return 2*x + 2*y
}