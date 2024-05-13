//Musharib
//i201764
#include<iostream>
using namespace std;

int main()
{
 int SY;
 int NOC;
 int TS;
 const int MS = 20000;
 const int YI = 3000;
 const int B = 2000;
 
 
 cout<<"Enter your total number of service years in this company"<<endl;
 cin>>SY;
 cout<<"Now enter total number of clients you have served them"<<endl;
 cin>>NOC;
 
 TS =  MS + SY*YI ;
 TS += NOC*B;
 
 cout<<"Your total salary is: "<<TS<<endl;
 
 
 
}
