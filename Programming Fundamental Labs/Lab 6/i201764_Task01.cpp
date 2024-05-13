#include <iostream>
using namespace std;
  
int main()
{
 
    int num1, num2;
 
    cout<<"Enter any two numbers "<<endl;
    cin>>num1;
    cin>>num2;
 
    switch(num1>num2)
    {
        case 1:
		 cout<<"Number 1 is greater than Number 2 "<< endl;
            break;
        case 0:
        {
		switch(num2>num1)
		{
        case 1: 
		cout	<<" The Number 1  is less than Number 2";
        break;
        case 0:
     
       	 cout	<<"Both of these numbers are equal";
        break;
    	}
		}
}
	}
