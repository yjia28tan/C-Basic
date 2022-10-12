// Convert the function prototype.cpp into normal function

#include<iostream>
#include<string>
using namespace std;

// Function definition
void displayValue(int num1, int num2, string name) // num = parameter
{
	cout<<"The value num1 is "<<num1<<endl;
	cout<<"The value num2 is "<<num2<<endl;
	cout<<"The name is "<<name<<endl;
}

// Main function
int main()
{
	// function call
	displayValue(65, 5," yyyyy"); // 5 = arguments
	
	return 0;
}

