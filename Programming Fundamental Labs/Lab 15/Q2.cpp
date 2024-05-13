//Musharib
//i201764
//Labtask 1
#include <iostream>
using namespace std;
int main()
{
	
	/*Declaring the integers*/
	int* num= new int();
	int even=0;
	int odd=0;
	int positive=0;
	int negative=0;
	
	
	
	cout<<"Enter 20 Elements"<<endl;
	/*Taking user input*/
	for(int i=1 ; i<=20 ;i++)
	{
		cin>>*num;
		/*checking for even and odd numbers*/
	if(*num%2==0) 
	even++;
    else
	odd++;
	/*checking for negative and positive  numbers*/
	if(*num>0)
	positive++;
	else
	negative++;
}
  /*Displaying input*/
	cout<<"Total even numbers are : "<<even<<endl;
    cout<<"Total positive numbers are : "<<positive<<endl;
	cout<<"Total negative numbers are : "<<negative<<endl;
	cout<<"Total odd numbers are : "<<odd<<endl;

	delete num;
		
	return 0;
}
