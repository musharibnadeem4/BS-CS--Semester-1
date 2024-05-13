//Musharib
//i201764
//Task 2
#include<iostream>
using namespace std;

int temp(int a, int b);


int main()
{
    double celsius,farhen=0,temp_f;
    cout<<"Enter temperature in celsius"<<endl;
    cin >> celsius;

    temp_f = temp(celsius,farhen);

    cout << "temperature in fahrenheit is: " << temp_f;
}
int temp(int a, int b)
{
    b = (1.8 * a) + 32;
    return b;
}
