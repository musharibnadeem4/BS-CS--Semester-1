//Musharib 
//i201764
//Lab 07
#include<iostream>
using namespace std;

int main()
{
	float x,y=0.0,avg=0.0,product=1,count=0;
	cout << "Enter a number"<<endl;
	cin >> x;
	y += x;

	while (x != 0.0)
	{
		cout << "Enter a number"<<endl;
		product=product*x;
		cin >> x;
		y += x;
		count++;
	}
	avg=y/(count * 1);
	cout <<"Average is: "<<avg<<endl;
	cout<<"Number of non zero numbers : "<<count<<endl;
	cout<<"The product of Numbers is : "<<product<<endl;
	return 0;
}
