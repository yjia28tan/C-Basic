// create a program that will allow users to enter 5 integer values 
// save them into an array 
// then calculate the sum of all the numbers in the array 

#include<iostream>
using namespace std;

int main()
{
	// declaring an array
	int values[5];
	int sum = 0;
	
	//int number;
	for(int i=0; i<=4; i++)
	{
		cout<<"Please enter a number"<<endl;
		cin>>values[i];
		
		sum += values[i];	
	}
	
	cout<<"Sum of the numbers is "<<sum<<endl;

	return 0;	
}

