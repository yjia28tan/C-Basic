#include<iostream>
using namespace std;
int main()
{
	string firstname;
	char a;
	int age;
	cout<<"Hello what is your name?"<<endl;
	cin>>firstname;
	cout<<"Please enter your age"<<endl;
	cin>>age;
	cout<<"Please enter your gender F/M:"<<endl;
	cin>>a;
	cout<<"Your information summary"<<endl;
	cout<<"========================"<<endl;
	cout<<"Name:"<<firstname<<endl;
	cout<<"Age:"<<age<<endl;
	if (a=='F'||a=='f')
	{
		cout<<"Cute girl"<<endl;
	}
	else if(a=='M' || a=='m')
	{
		cout<<"Good boy"<<endl;
	}
	else 
	{
		cout<<"unidentfied character"<<endl;
	}
	cout<<"Gender:"<<a<<endl;
	return 0;
}