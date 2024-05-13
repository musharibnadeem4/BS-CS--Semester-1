//Musharib 
//i201764
#include<iostream>
using namespace std;

int main()
{
	int num,count=1,factorial;
	cout <<"Enter Number to Calculate Factorial: "<<endl;
	cin >> num;
	
	if (num < 0)
	{
		cout << "Invalid Input";
	}
	else
	{
		while(count<=num){
		factorial = (factorial*count);
		count++;
		}
	cout<<"Factorial = "<<factorial<<endl;
	}	
}
