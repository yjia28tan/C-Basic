// function

#include<iostream>
#include<string>
using namespace std;

// Function definition
int displayValue(int num1, int num2, string name = "aay") 
{
	cout<<"The value num1 is "<<num1<<endl;
	cout<<"The value num2 is "<<num2<<endl;
	cout<<"The name is "<<name<<endl;
	int total = num1 +num2;
	return total; //return function the void change to int
}

// Main function
int main()
{
	// function call
	int result;
	result = displayValue(65, 5, "yyyyy"); 
	cout<<"The result is "<<result<<endl;
	
	return 0;
}

