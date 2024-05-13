//Musharib
//i201764
//Labtask 3
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char str[256];
    int freq[256]={0};
    cout<<"Enter a string"<<endl;
    gets(str);
    for(int i=0; str[i]!='\0'; i++) //For loop for counter of alphabets
	{
        freq[str[i]]++;
    }
        for(int i=0; i<256; i++){
        if(freq[i] !=0){
            cout<<"Number of " << (char)i << " = "<< freq[i] ; //displaying frequency of a string
            cout << endl; 
        }
    }
    return 0;
}
