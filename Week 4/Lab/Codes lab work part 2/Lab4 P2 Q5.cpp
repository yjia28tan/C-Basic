// Lab 4 Question 5
// function that takes value as parameter
#include<iostream>
using namespace std;

void func1(int numVal) 
{
	cout <<"The value of numVal is " <<numVal <<"\n";
}

// function that takes reference as parameter
// notice the & before the parameter
void func2(int &numRef) 
{
	numRef = 19;
}

int main() 
{
	int num = 5;
	cout <<"The original value of num is " <<num <<"\n";
	
	// pass by value
	func1(num);
	
	// pass by reference
	func2(num);
	
	cout <<"New value" <<num <<"\n";
	
	return 0;
}

