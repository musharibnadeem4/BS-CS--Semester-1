//Musharib
//i201764
//Assignment 4
#include <iostream>
using namespace std;

int main()
{
	int num,number,even=0,odd=0,zero=0;
	cout<<"Enter total number"<<endl;
	cin>>num;
	for(int i=0;i<num;i++)  //incremintg numbers
	{
	cout<<"Enter Numbers"<<endl;
	cin>>number;     
	if(number%2==0)   //checking for even numbers
	even++;
	if(number%2!=0)  //checking for odd numbers
	odd++;
	if(number==0)    //checking for zero's in entered numbers
	zero++;
    }
    cout<<"Number of even digits : "<<even<<endl;
    cout<<"Number of odd digits : "<<odd<<endl;
    cout<<"Number of zero's in numbers are : "<<zero<<endl;
}
	
