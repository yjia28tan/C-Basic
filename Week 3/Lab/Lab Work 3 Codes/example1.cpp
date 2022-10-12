// This program has two functions: main and displayMessage
#include <iostream>
using namespace std;

//*****************************************
// DEFINITION of function displayMessage  *
// This function displays a greeting.     *
//*****************************************

void displayMessage() // function definition
{
   cout << "Hello from the function displayMessage.\n"; // body of function
}

//*****************************************
// Function main                          *
//*****************************************

int main()
{
   cout << "Hello from main.\n";
   displayMessage(); // function call is happening here
   cout << "Back in function main again.\n";
   return 0;
} 
