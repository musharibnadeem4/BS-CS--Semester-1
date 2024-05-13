//Musharib
//i201764
//Labtask 4
#include<iostream>
using namespace std;

int main()
{
    int arr_a[10], arr_d[10];
    cout<<"Enter 10 Number"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the value ["<<i<<"]: ";
		cin>>arr_a[i];
    }
    int j = 0;
    for(int i=9;i>=0;i--)
    {
        arr_d[i] = arr_a[j];
        j++;
    }
    for(int i=0;i<10;i++)
    {
        cout <<"Elements in reverse Order are : "<<endl;
        for(i=0; i<10 ;i++)
        cout<< arr_d[i] << endl;
    }
    return 0;
}	
 
