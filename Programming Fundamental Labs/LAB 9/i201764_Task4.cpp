//Musharib
//i201764
#include <iostream>
using namespace std;
int main()
{
    int x,num, counter = 0;
    cout<<"Prime numbers between 550 and 700 are:"<<endl;
    cout<<endl;
    for (num = 550; num < 700; num++)   //Range to Check between prime numbers
    {
        for (x = 2; x <= (num / x); x++) //Condition for prime numbers
        {
            if (!(num%x))
            {
                break;
            }
        }
        if (x > (num / x))
        {
            cout << num << endl;
            counter++;
        }
    }
    cout << "Total prime numbers are " << counter << endl;

    return 0;
}
