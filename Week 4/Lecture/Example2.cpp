// Lecture W4 page 14

#include<iostream>
using namespace std;

int main()
{
	int x = 25;
	int *ptr = nullptr; // name of the pointer is ptr
	// it is pointing to nothing
	ptr = &x;
	// assign the address of x to the pointer ptr
	cout<<"The value of x is "<<x<<endl;
	cout<<"The address of x is "<<ptr<<endl;
	cout<<"The value of x is "<<*ptr<<endl;
	
	// output
	// The value of x is 25
	// The address of x is 0x6ffe04
	// The value of x is 25
		
	return 0;
}
