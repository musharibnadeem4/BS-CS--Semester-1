//Musharib
//i201764
//Assignment 6
#include <iostream>
using namespace std;
int main()
{
	/*Declaring bool array for matrix 1*/
	bool m_1[3][3];
	int  arr[3];
	int temp=0;
	
	/*Taking validate user input and also counting that how many ones are there*/
	cout << "Enter elements of Matrix " << endl << endl;

	for (int i = 0; i < 3; i++)       
	{
		temp=0;
		for (int j = 0; j < 3; j++)
		{
			cout << "\nEnter element a[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> m_1[i][j];
			
			if(m_1[i][j]==1)
			{
				temp++;
			}
			
		}
		arr[i]=temp;
	}
	
	int greatest=0, ind;
	for(int p=0; p<3 ; p++)   //Counter loop
	/*Displaying number of ones and row with maximum number of ones in it*/
	{
		cout << "\nno of ones in row " << p << ":" << arr[p]; 
		
		if(arr[p]>greatest)
		{
		greatest=arr[p];
		ind=p;
		}
		
	}
	
cout << "\n\nmax ones (" << greatest << ") are in row " << ind ;  

	
}
		



