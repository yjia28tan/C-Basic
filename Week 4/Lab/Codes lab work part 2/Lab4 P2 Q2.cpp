// Lab 4 Question 2

#include <iostream>
using namespace std;

int main()
{
	int* pointVar, var;
	var = 5;
	
	// assign address of var to pointVar pointer
	pointVar = &var;
	
	// access value pointed by pointVar
	cout << *pointVar << endl; 
	// Output: 5
	
	return 0;
}

