//Musharib
//i201764
//Lab Task 1

#include <iostream>
using namespace std;

int tripleCallByValue( int );
void tripleByReference( int & );
int main()
{

    int num,after_num;
    cout << "Enter a number: ";
    cin >> num;

    after_num = tripleCallByValue(num);
    cout << "Value before passing  value is: " << num << endl;
    cout << "Value after passing value is: " <<  after_num << endl << endl;

    cout << "Value before passing value is: " << num << endl;
    tripleByReference(num);
    cout << "Value after passing  reference is: " <<  after_num << endl << endl;

    after_num = tripleCallByValue(num);
    cout << "Value before passing value is: " << num << endl;
    cout << "Value after passing value is: " <<  after_num << endl << endl;

}

int tripleCallByValue(int value)
{
    value = value * 3;
    return value;
}

void tripleByReference(int& value)
{
    value = value * 3;

}
