//Musharib
//i201764
//Lab Task 5
#include <iostream>
using namespace std;
bool perfect (int num) ;    
int main ()
{
cout << "All the Perfect Numbers under 1000 are :"<<endl;
    for (int number=1; number<1000; number++)
        if (perfect(number))
            cout <<number<<" is a Perfect Number "<<endl;  
}

bool perfect(int number)
{
    int sum = 1;
    for (int i=2; i*i<=number; i++)
    {
        if (number%i==0)
        {
            if(i*i!=number)
                sum+=  i + number/i;
            else
                sum=sum+i;
        }
    }
     if (sum == number && number!= 1)
    	return 1;
    	
return 0;
}
