// loop
#include <iostream>
using namespace std;
int main() 
{
int counter;
// increasing by 1
for (counter = 1; counter < 6; counter++) // counter++ print then only +
{
	cout << "The counter value is " <<counter<<endl;
}
// increasing by 2
for (counter = 1; counter <= 10; counter = counter + 2)
{
	cout<< "The counter value is "<<counter<<endl;
}
return 0;
}

