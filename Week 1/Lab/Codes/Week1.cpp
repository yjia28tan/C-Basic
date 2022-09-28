#include<iostream>
using namespace std;
int main()
{
	
	//declaring variables
	string name;
	int age;
	char first_letter;
	bool movie_like;
	
	cout<<"Hello World" <<endl; //output
	cout<<"What is your name?" <<endl;
	cin>>name; //get input from user
	cout<<"Your name is " <<name <<endl;
	
	cout<<"How old are you?" <<endl;
	cin>>age;
	cout<<"Your age is " <<age <<endl;
	
	cout<<"What is the first letter of your name?" <<endl;
	cin>>first_letter;
	cout<<"The first letter of your name is " <<first_letter<<endl;
	
	cout<<"Do you like movies?" <<endl;
	cin>>movie_like;
	cout<<movie_like <<endl;	
	
	cout<<"Summary Output" <<endl;
	cout<<name <<endl;
	cout<<age <<endl;
	cout<<first_letter <<endl;
	cout<<movie_like <<endl;
	
	return 0;
}

