// Chapter 2 Page 10
// array

#include <iostream>
using namespace std;
int main() 
{
int i = 5;
int mark[5] = {19, 10, 8, 17, 9};

// change 4th element to 9
mark[3] = 9;

// take input from the user
// store the value at third position
cout <<"Enter a value to change the third value"<<endl;
cin >> mark[2];
for (int a=0; a<5; a++)
{
	cout<<mark[a]<<endl;
}
return 0;
}
