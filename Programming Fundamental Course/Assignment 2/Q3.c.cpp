//Musharib
//i201764
//Assignment 4
//Musharib
//i201764
//Assignment 4
#include<iostream>
using namespace std;
int main()
{
	int row_num;

	cout<<"Enter lines: ";
	cin>>row_num;
	cout<<endl;
	/*Same logic for question--First incrementing for half number of lines entered by user and then decrementing for same number of  lines*/
	
    for(int n = 1; n <= row_num; n++){
 
        for(int r = 1; r < row_num-n+1; r++){
            cout<<"  ";
        }
        int val = 1;
        for(int r = 1; r <= n; r++){
            cout<<val<<"  ";
             
            val = val * (n - r)/r;
        }
        cout<<endl<<endl;
    }
        for(int n = row_num-1; n >=1; n--){
 
        for(int r = 1; r < row_num-n+1; r++){
            cout<<"  ";
        }
        int val = 1;
        for(int r = 1; r <= n; r++){
            cout<<val<<"  ";
             
            val = val * (n - r)/r;
        }
        cout<<endl<<endl;
    }

    return 0;
}
