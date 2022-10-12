// Lecture W4 page 28

#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 8;
	int set[SIZE] = {5,10,15,20,25,30,35,40};
	int *ptr = nullptr; // pointer
	ptr = set; // assign set address to the ptr pointer
	
	for(int count = 0; count < SIZE; count++)
	{
		cout<<*ptr<<endl;
		ptr++; // pointer going forward
	}
	
		for(int count = 0; count < SIZE; count++)
	{
		ptr--; // pointmove backwards
		cout<<*ptr<<endl;
	}
		
	return 0;
}
