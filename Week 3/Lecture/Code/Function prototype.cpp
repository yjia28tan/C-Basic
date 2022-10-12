// Chapter 3 Function prototype 

#include<iostream>
using namespace std;

// Function prototype
void displayValue(int);

// Main function
int main()
{
	// function call
	displayValue(5);
	return 0;
	
}

// Function definition
void displayValue(int num)
{
	cout<<"The value is "<<num<<endl;
}
