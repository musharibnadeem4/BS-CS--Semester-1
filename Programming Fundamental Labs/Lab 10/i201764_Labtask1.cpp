//Musharib
//i201764
//Task 1
#include<iostream>
using namespace std;

float add(float a, float b);
float multiply(float x, float y);
int main()
{
	float num1,num2,addition,multi;
	cout<<"Enter first number"<<endl;
	cin>>num1;
	cout<<"Enter Second number"<<endl;
	cin>>num2;
	addition = add(num1,num2);
	multi=multiply(num1,num2);
	cout<<"Sum of numbers is : "<< addition <<endl;
	cout<<"Product of two number is : "<<multi<<endl;	
	
	return 0;
}
    float add(float a, float b)
    {
    	return( a+b);
	}
	float multiply(float x, float y)
	{
		return (x*y);
	}
