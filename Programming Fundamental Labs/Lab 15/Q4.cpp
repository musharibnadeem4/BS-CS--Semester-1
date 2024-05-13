//i201764
//Musharib
//Labtask 4
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int rows, col;
	
	cout<<"Enter rows and columns: "<<endl; /*Taking user input for rows and coloumns*/
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
			cin >> matrix[x][y];                            	/*Taking user input for elements of matrix*/
		}
	}
	int sum;
	for ( int x = 0; x < rows; x++ ) 
	{
		for ( int y = 0; y < col; y++ ) 
		{
			sum+= pow(matrix[x][y],2);
   	}
	}
	cout << "The norm is of given matrix is : " << setprecision(3) << sqrt(sum);
	
	
	return 0;
}
