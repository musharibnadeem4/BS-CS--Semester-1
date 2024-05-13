//Musharib
//i201764
//Lab Task 3
#include<iostream>
using namespace std ;
int divide(int a, int b=2);
int main ()
{
    int a = 8 ;
    int b = 4 ;
    cout << "Division with 2 arguments is "<<divide (a,b)<<endl;       
    cout << "Division with one argument is "<<divide (a)<<endl ;
    return 0;    
}
int divide (int a, int b) 
{
    int dividing = a/b ;
    return dividing;

}
