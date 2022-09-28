// display money

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout<<setprecision(2);
	cout<<5.8;
	
	return 0;
}

