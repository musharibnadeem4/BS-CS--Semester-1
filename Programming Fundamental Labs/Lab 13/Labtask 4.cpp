//Musharib
//i201764
//Assignment 2
#include<iostream>
using namespace std;

void multiplication(int a[10][10], int b[10][10], int result[10][10]);   //Declared Function

int main() 
{
	int m_1[10][10], m_2[10][10], calculation[10][10];    //Iniatilized Arrays
	multiplication(m_1, m_2, calculation);
	
	return 0;
}

void multiplication(int a[10][10], int b[10][10], int result[10][10])
{
	int r1, r2, c1, c2; 
	     
      /*Taking user input for number of rows and coloumn in matrices*/
      
	cout << "Enter rows of first matrix: " << endl;
	cin >> r1;
	cout << "Enter columns of first matrix: " << endl;
	cin >> c1;
	cout << "Enter rows of second matrix: " << endl;
	cin >> r2;
	cout << "Enter columns of second matrix: " << endl;
	cin >> c2;

	while (c1 != r2)
	{
		/*Taking user input for elements in rows and coloumn*/
		
		cout << "Wrong input!! Input again." << endl;
		cout << "Enter rows of first matrix: ";
		cin >> r1;
		cout << "Enter columns of first matrix: " << endl;
		cin >> c1;
		cout << "Enter rows of second matrix: " << endl;
		cin >> r2;
		cout << "Enter columns of second matrix: " << endl;
		cin >> c2;
	}


	cout << "Enter elements of Matrix 1" << endl << endl;

	for (int i = 0; i < r1; i++)     //Nested loops for Elements of Matrix 1 taking user input in 2D arrays
	{
		for (int j = 0; j < c1; j++)
		{
			cout << "\nEnter element a[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> a[i][j];
		}
	}

	cout << "Enter elements of Matrix 2" << endl << endl;

	for (int i = 0; i < r2; i++)        //Nested loops for Elements of Matrix 2 taking user input in 2D arrays
	{
		for (int j = 0; j < c2; j++)
		{
			cout << "Enter element b[" << i + 1 << "][" << j + 1 << "] : ";
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < r1; i++)       //Nested loops for multiplying the rows and coloums of two matrices
	{
		for (int j = 0; j < c2; j++)
		{
				result[i][j] = a[i][j] * b[i][j];	
		}
	}

	cout << "The resulting matrix is:" << endl;

	for (int i = 0; i < r1; i++)           // Nested loops for displaying the results like after multiplying the matrices
	{
		for (int j = 0; j < c2; j++)
		{
			cout << " " << result[i][j];
		}
	}
}
