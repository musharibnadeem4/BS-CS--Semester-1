//i201764
//Musharib
//Labtask 5
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float norm(int **matrix, int row, int col);

/*Finding the norm of matrix*/
float norm( int **matrix, int rows, int col)  //function to find norm 
{
	int sum_elements;
	for ( int i = 0; i < rows; i++ ) //for rows of matrix
	{
		for ( int j = 0; j < col; j++ ) //for coloumns of matrix
		{
			sum_elements+= pow(matrix[i][j],2);
   	}
	}
	float norm= sqrt(sum_elements);
	return norm;
}

int main()
{
	int rows, col;
	/*Taking input for number of rows and coloumns*/
	cout<<"Enter rows and columns: "<<endl;
	cin>>rows;
	cin>>col;
	
	int **matrix= new int*[rows];
	
	for(int x=0;  x< rows ; x++)
	matrix[x]=new int[col];
	
	for(int x=0;  x< rows ; x++)
	{
		for(int y=0; y<col ; y++)
		{
			cout << "Matrix[" << x << "][" << y << "]: ";
			cin >> matrix[x][y];      /*Taking input for elements of matrix*/
		}
	}
	cout << "The norm is: " << setprecision(3) << norm(matrix, rows, col);     //Displaying Input 
	return 0;
}

