#include<iostream>
#include <iomanip>
using namespace std;

//function prototype 
void receiveInput(double& temp, char& sc);
double toCels(double t );
double toFahren(double t);
int findScaleCase(char s);



int main()
{
	double temp;
	char scale;
	
    //call function receiveInput
    receiveInput(temp,scale);
    //cout << "just came from receieveInput" << endl;
    scale = findScaleCase(scale);
    
    //cout << "came back here from findScaleCase" << endl;
    if(scale == 1 )
	{
		//call for toCels
		//cout<<"Input is in F scale"<<endl;
		double result = toCels(temp);
		cout<<"The result is "<<result<< " C" << endl;
	}
	else if(scale == 2)
	{
		//call for toFahren
		//cout<<"Input is in C scale"<<endl;
		double result = toFahren(temp);
		cout<<"The result is "<<result<< " F" << endl;
			
	}
	
	else 
	{
		cout<<"Scale must be C or F only";
	}
	
	return 0;
}
void receiveInput(double& temp, char& sc)
{
	//cout << "at receiveInput" << endl;
	cout<<"Please enter the temperature: ";
	cin>>temp;
	cout<<"Please enter the scale case (only C or F): ";
	cin>>sc;

}
double toCels(double t )
{
	//display the result with decimal precision 1
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint); 
	cout << setprecision(1);
	
	//cout << "to cels..." << endl;
	double result = (t-32)/1.8;
	return result;
}

double toFahren(double t)
{
	//display the result with decimal precision 1
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint); 
	cout << setprecision(1);
	
	//cout << "to fahren..." << endl;
	double result = (1.8 * t + 32);
	return result;
}

int findScaleCase(char s)
{
	//cout << "at findScalecase" << endl;
	int result;
	
	if(s=='F' || s=='f')
	{
		
		//cout<<"F scale"<<endl;
		result = 1;
		
	}
	else if(s=='C' || s=='c')
	{
		
		//cout<<"C scale"<<endl;
		result = 2;
			
	}
	
	else 
	{
		//cout << "neither F or C" << endl;
		result = 3;
	}
	
	return result;
}
