//Musharib
//i201764
//Labtask 01
#include<iostream>
using namespace std;
#define N 10

int main()
{
	int num;
	int* arr = new int[num];
	 cout<<"Enter Number of Elements "<<endl; /*Enter elements of array you want to enter*/
	 cin>>num;
	 cout<<"Now enter elements of array"<<endl;

	for (int i = 0; i <num; i++) {
		cin >> arr[i];}      /*Taking user input for array*/
		
	int *ptr = new int();
	cout<<"Again Enter the elements to check for presence in array"<<endl;   /*Again input to check for presence in firstly input array*/
		cin >>*ptr;
		/*Check for presence of elemets in array */
		 for (int i= 0; i < num; i++) {
		 	if (arr[i] == *ptr)
		 	{
			 cout<<"Present";
		 	return 0;
			 }
		}
	
	cout<<"Its not present "<<endl;
	
	delete arr;
	delete ptr;
	
	return 0; 
}
