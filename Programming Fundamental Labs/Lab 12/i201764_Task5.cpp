///Musharib
//i201764
//Labtask 3
#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int i,j,temporary;
 /*Taking user Input for Numbers*/
    cout<<"Enter 10 numbers: "<<endl;
    for(i=0; i<10; i++)
    {
       cout<<"Enter the value ["<<i<<"]: ";
		cin>>arr[i];
    }
    for(i=0; i<10; ++i)
    {
        for(int j=i+1; j<10; ++j)
        {
            if(arr[j] > arr[i])
            {
                temporary = arr[j];
                arr[j] = arr[i];
                arr[i] = temporary;
            }
        }
    }
    cout<<"Elements of array in sorted descending order:"<<endl;
    for(i=0; i<10; ++i)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}
