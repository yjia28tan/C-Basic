// Tutotial 3 Q1

#include<iostream>
using namespace std;

// Function prototype
void receiveInput(double& temp, char& sc);
double toCels(double t);
double toFahren(double t);
int findScaleCase(char s);

int main()
{
	double temp;
	char scale;
		
	// call functions
	receiveInput(temp, scale);
	scale = findScaleCase(scale);
	
	if(scale == 1)
	{
		//call for toCels
		//cout<<"F scale"<<endl;
		double result = toFahren(temp);
		cout<<"The result of Fahrenheit to Celsius is "<<result<<endl;
	}
	
	else if(scale == 2)
	{
		//call for toFahren
		//cout<<"C scale"<<endl;
		double result = toCels(temp);
		cout<<"The result of Celsius to Fahrenheit is "<<result<<endl;
	}
	
	else 
	{
		//cout<<"Scale must be C or F only"<<endl;
		receiveInput(temp, scale);
		main();
	}
	
	return 0;
}

void receiveInput(double& temp, char& sc)
{
	cout<<"Please enter your temperature: ";
	cin>>temp;
	cout<<"Please enter the scale case (C or F): ";
	cin>>sc;
}

double toCels(double t)
{
	double result = (t-32)/1.8;
	return result;
}

double toFahren(double t)
{
	double result = (1.8*t) + 32;
	return result;
}

int findScaleCase(char s)
{
	int result;
	
	if(s=='F' || s=='f')
	{
		cout<<"F scale"<<endl;
		result = 1;
		
	}
	else if(s=='C' || s=='c')
	{
		cout<<"C scale"<<endl;
		result = 2;	
	}
	
	else 
	{
		cout << "Enter F or C only" << endl;
		result = 3;
	}
	
	return result;
}


