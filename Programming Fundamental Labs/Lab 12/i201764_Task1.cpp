//Musharib
//i201764
//LabTask 01
#include <iostream>
using namespace std;
int main()
{
    int size;
    int arr[11];
    /*Taking user Input for array*/
   	cout<<"Enter the size of array: ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Enter the value ["<<i<<"]: ";
		cin>>arr[i];
	}
	/*Unique Output without Repition of Numbers*/
    cout <<"The Unique elements of the given array are : "<<endl;
    for (int i=0; i<size; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
         if (i == j)
          cout << arr[i] << " ";
    }
    return 0; 
}
