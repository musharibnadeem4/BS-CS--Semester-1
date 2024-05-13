//Musharib
//i201764
//Assignment 4
#include<iostream>
using namespace std;
int main()
{
	int row_num;

	cout<<"Enter lines: "<<endl;
	cin>>row_num;
	cout<<endl;
	/*Same logic but this time printing maximum value and decrementing it untill the number of lines entered*/
	
    for(int n = row_num; n >=1; n--){
 
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

}
