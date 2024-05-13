//Musharib
//i201764
//Assignment 4
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int x=0;
	cout<<"Enter number untill you want multiplication table"<<endl;
	cin>>x;
	
   cout << setw(4) << right << "|";    //Set for proper arrangement of table
   for( int i=1; i<= x; ++i )cout << left << setw(5) << i ;   //Adjusting the table according to user entered value
   cout<<endl;
   	for(int j=1;j<x*5;j++)     
   	    cout<<"-";
   	cout<<endl;
   for( int i=1; i<=x; ++i )   //For loop incrementing the values in table untill the given limit by the user 'x'
   {

       cout << setw(3) << left << i << '|' ;
       for( int j = 1; j<=x ; ++j )
            cout << setw(5) << left << i*j ;
       cout << endl;
   }
}
 
