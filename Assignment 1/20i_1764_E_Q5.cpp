//Musharib
//i201764
//Assignment 6
#include <iostream> 
using namespace std;
int main (){
	int numbers[14];
	int size;
	int n;

    /*Taking validate user Input*/
	cout<<"Enter the size of array: ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Enter the value ["<<i<<"]: ";
		cin>>numbers[i];
	}
	cout<<"Enter n: ";
	cin>>n;
	/*Nested loop for getting match if there is nay for difference of two numbers*/
	for(int i=0;i<size;i++)
	{		
		for(int j=i+1;j<size;j++)
		{
			if(numbers[j]-numbers[i]==n)
			{
			cout<<"Pair Found: ( "<<numbers[i]<<", "<< numbers[j]<<" )\n"; //Displaying output
			}
			else if (numbers[i] - numbers[j]!= n)
			{
			continue;
			}
		}
	}
	
	
	return 0;
}
