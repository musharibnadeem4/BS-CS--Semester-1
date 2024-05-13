//Musharib
//i201764
//Labtask 5
#include<iostream>
using namespace std;
int main()
{
	int row;
	int col;
	int trans[10][10];
	/*Taking user Input for number of coloumns and rows*/
	cout<<"Enter rows of matrix"<<endl;
	cin>>row;
	cout<<"Enter coloumns of matrix"<<endl;
	cin>>col;
	/*Tasking values of matrix*/
	int arr[row][col];
	cout<<"Enter elements"<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin>>arr[i][j];
		}
	}
	for (int i = 0; i < row; ++i)
      for (int j = 0; j < col; ++j) {
        trans[j][i] = arr[i][j];
      }
	/*Finding transpose by reversing rows and coloumn*/
	cout<<"Transpose of the Matrix is : "<< endl;
   for (int i = 0; i < col; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << trans[i][j];
        if (j == row - 1)
        {
            cout << " " << endl;
        }
      }
	
	
	return 0;
}

