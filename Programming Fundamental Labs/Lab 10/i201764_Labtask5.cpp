//Musharib
//i201764
//Task 5
#include <iostream>
using namespace std;
void greater_num(int a, int b)
{
    if (a > b)
        cout << a << " is greater";
    else
        cout << b << " is greater";
}
int main()
{
    int num1, num2;
    cout<<"Enter two numbers\nEnter first number :"<<endl;
    cin >> num1;
    cout<<"Enter second Number"<<endl;
    cin >> num2;

    greater_num(num1, num2);
}



