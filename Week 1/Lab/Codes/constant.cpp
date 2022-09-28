// This file is constant.cpp
#include <iostream>
using namespace std;
int main()

{
	// Constants
	// constant variable name must be CAPITAL
	const double PI = 3.14159; 
	const double DIAMETER = 10.0;
	
	// Variable to hold the circumference.
	double circumference;
	
	// Calculate the circumference.
	circumference = PI * DIAMETER;
	
	// Display the circumference.
	cout << "The circumference is: " << circumference <<endl;
	return 0;
}
