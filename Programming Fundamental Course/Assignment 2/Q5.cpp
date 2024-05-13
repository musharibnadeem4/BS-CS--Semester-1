//Musharib
//i201764
//Assignment 4
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char a[5];
    int n, count=0;
    n = 5;

/*Declaring and storing values of A,B,C,D,E*/

    a[0] = 'A';
    a[1] = 'B';
    a[2] = 'C';
    a[3] = 'D';
    a[4] = 'E';

    cout << "The permutations are: " << endl;
    
    
 /*For loops for incrementing the values for every string literal*/
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < n; l++)
                {
                	/*Checking for repition of every single string that it may not rrepeat*/
                	
                    if (!(a[i] == a[j] || a[i] == a[k] || a[i] == a[l] || a[j] == a[k] || a[j] == a[l] || a[k] == a[l])){
                        cout << a[i] << a[j] << a[k] << a[l] << endl; 
                    count++;}

                }
            }
        }
    }

    cout << "\nNumber of permutations are: " << count << endl; //Displaying number of permutations

    return 0;
}
