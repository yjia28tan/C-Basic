// W3 (W2 Chapter 2 page 7)
// Array

#include<iostream>
using namespace std;

int main()
{
	// declaring an array
	int marks[5]={10, 20, 45, 56, 45};
	cout<<"The thrid element value "<<marks[2]<<endl;
	cout<<"The fourth element vlaue "<<marks[3]<<endl;
	
	//update the second element in the array
	marks[1] = 23;
	cout<<"The second element value "<<marks[1]<<endl;
	
	for(int i=0; i<=4; i++)
	{
		cout<<"Marks["<<i<<"]:"<<marks[i]<<endl;
	}
	
	return 0;
}

