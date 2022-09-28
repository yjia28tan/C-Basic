#include <iostream>
using namespace std;
int main()
{
  int sum = 0;
 for(int counter=0;counter<=4;counter++)
 {
 	cout<<"print counter:"<<counter<<endl;
 	sum += counter;
 }
  cout<<"The sum of all counters"<<sum<<endl;
  
 
 return 0;
}
