// W1 Lab Page 5 (2)
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	long int num;
	cout <<"Enter a number: ";
	cin >>num;
	cout <<"\nMultiplying (by 5) and printing the number 10 times with 3 columns:\n";
	for(i=0; i<10; 	i++)
	{
		cout<<num<<setw(25)<<num<<setw(25)<<num<<"\n";
		num = num * 5;
	}
	return 0;
}

