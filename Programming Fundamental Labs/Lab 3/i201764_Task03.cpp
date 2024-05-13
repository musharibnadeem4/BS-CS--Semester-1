//i201764
//Musharib
#include <iostream>
using namespace std;
int main()
{
	int sec,min,hour;
	cout<<"Enter Number of hours "<<endl;
	cin>>sec;
	hour=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    cout<<hour<<"Hours"<<endl;
    cout<<min<<"Minutes"<<endl;
    cout<<sec<<"Seconds"<<endl;
    return 0;
}
