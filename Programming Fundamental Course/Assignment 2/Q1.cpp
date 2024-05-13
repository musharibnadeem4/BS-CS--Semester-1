//Musharib
//i201764
//Assignment 4
#include<iostream>
using namespace std;
int main(){
	
   int up_limit,low_limit;
   cout<<"Enter upper limit of following numbers 256, 128, 32, 16, 8, 4, 2"<<endl; 
   cin>>up_limit;
   while(up_limit!=256 && up_limit!=128 && up_limit!=32 && up_limit!=16 && up_limit!=8 && up_limit!=4 &&up_limit!=2 ) //Loop validation for given limit
   {
    cout<<"Enter upper limit of following numbers 256, 128, 32, 16, 8, 4, 2"<<endl;
    cin>>up_limit;
   }
   cout<<"Enter lower limit less than eqaul to upper limit or greater than or equal to zero"<<endl;     
   cin>>low_limit;
   while(low_limit > 0 || low_limit < 0 )       //Loop validation for  lower limit
   {
   cout<<"Enter lower limit less than eqaul to upper limit or greater than or equal to zero"<<endl;
   cin>>low_limit;
   }
   cout<<"Decimal		Octal		Binary		Hexadecimal"<<endl;
   cout<<"---------------------------------------------------"<<endl;
   for(int i=low_limit; i<=up_limit; ++i)   //Loop to find decimal number in between the limits entered
   cout<<dec<<i<<endl;
   
}
