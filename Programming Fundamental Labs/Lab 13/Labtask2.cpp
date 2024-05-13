//Musharib
//i201764
//i201764
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];  
    int v_counter = 0 ; 
    cout<<"Enter the string : " ;
    gets(str) ;  
    for(int i=0;str[i];i++)  
    {
        //loop for counting the vowels in the string entered by user
        if(str[i]=='a')
        v_counter++;
		else if(str[i]=='e')
		v_counter++;
		else if(str[i]=='i')
		v_counter++;
		else if(str[i]=='o')
		v_counter++;	
		else if(str[i]=='u')
		v_counter++;	
		else if(str[i]=='A'||str[i]=='I'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		v_counter++;	
		else
		cout<<"";
    }

    cout<<"Total number of vowels in the string = "<<v_counter;
    
    
    return 0;
}
