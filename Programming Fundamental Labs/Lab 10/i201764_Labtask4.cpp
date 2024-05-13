//Musharib
//i201764
//Task 4
#include<iostream>
using namespace std;

int seconds(int hours, int minutes)
{
	int seconds;
	seconds = hours * 3600;
	seconds = seconds + (minutes * 60);
	return seconds;
}

int main()
{
	
	int hr, min;
	int sec;
	cout<<"Enter hours"<<endl;
	cin>>hr;
	cout<<"Enter minutes"<<endl;
	cin>>min;

    sec=seconds(hr,min);

	cout << sec;
}
