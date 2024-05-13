//Musharib
//i201764
//Assignment 6
#include <iostream>
using namespace std;

void merge(int val[])     //Function for organzing the number like asked in question
{
	int index, temp, size{ 30 };
	
	for (int i = 0; i < size - 1; i++) {
		
		index = i;

		for (int j = i + 1; j < size; j++)
		{
			if (val[j] < val[index])
				index = j;
		}

		temp = val[i];
		val[i] = val[index];
		val[index] = temp;      //Storing value of index variable in temp variable
	}
}


int main()
{
	int a1[14];    //Initializing two arrays
	int a2[14];
	int temporary[30];
	cout << "Please Enter the values in the first Array" << endl;
	for (int i = 0; i < 15; i++) {
		cout << "Enter the number in [" << i << "]: ";
		cin >> a1[i];
	}
	cout << "\n\nPlease Enter the values in the second Array" << endl;
	for (int i = 0; i < 15; i++) {    //Loop for user input
		cout << "Enter the number in [" << i << "]: ";
		cin >> a2[i];
	}
	for (int i = 0; i < 15; i++) {   //Saving values of array 1 in temporary array variable
		temporary[i] = a1[i];
	}
	int count = 0;
	for (int i = 15; i < 30; i++) {      //Repeating above step for array 2
		temporary[i] = a2[count];
		count++;
	}

 /*Using the function to merge the values taken by the user*/
	merge(temporary);
	                        
	for (int i = 0; i < 15; i++) {
		a1[i] = temporary[i];
	}
	count = 0;
	for (int i = 15; i < 30; i++) {
		a2[count] = temporary[i];
		count++;
	}
	cout << "\nValues of the first array are:" << endl;
	
	for (int i = 0; i < 15; i++) {
		cout << a1[i] << " ";
	}
	
	cout << "\nValues of the second array are: " << endl;
	
	for (int i = 0; i < 15; i++) {
		cout << a2[i] << " ";
	}

	return 0;
}
