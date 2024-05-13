//Musharib
//i201764
//Assignment 4
#include<iostream>
using namespace std;
int main()
{
	int row_num;
	
    /*Taking user input*/
    
	cout<<"Enter lines: "<<endl;
	cin>>row_num;
	cout<<endl;
	
	/*Loop for displaying the pascal triangle--The loop will make it increment in numbers untill the value of lines the user input*/
	
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
    return 0;
}
 
