//Musharib
//i201764
#include<iostream>
#include <iostream>
using namespace std;
int main()
{
    int rows,i=2;  
    cout<<"Please Enter the Number of Rows:"<<endl;
    cin>>rows;
    for (int x = 1; x <= rows; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << i;
        }
        cout << endl;
        i = i + 2;
    }

    return 0;
}
