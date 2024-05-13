//Musharib
//i201764
//Labtask1
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50], temp;
    int i, j;
    cout << "Enter a string : ";
    gets(str);
    j = strlen(str) - 1;
    for (i = 0; i < j; i++,j--) //Loop for transponse of matrix
    {
    	//Rversing the string literal using a temp variable
        temp = str[i];     
        str[i] = str[j];
        str[j] = temp;
    }
    cout <<"Reverse string : " <<str<<endl; //Printing Reverse String
    return 0;
}
