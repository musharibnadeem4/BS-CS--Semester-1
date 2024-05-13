//Musharib
//i201764
#include <iostream>
using namespace std;

int main()
{
    int i, counter, cube;

    cout << "Input the number of terms : "<<endl;
    cin >> counter;
    for (i = 1; i <= counter; i++) 
    {
    	
        cube = i * i * i;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << cube << endl;
       
    }
    return 0;
}
