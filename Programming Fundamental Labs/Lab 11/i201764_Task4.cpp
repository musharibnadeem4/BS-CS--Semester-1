//Musharib
//i201764
//Lab Task 4
#include <iostream>
using namespace std ;
int qualityPoints(int average) ;

int main ()
{
int average;
cout << "Please Input your average points :"<<endl;
cin >> average;
cout <<"The quality of your average points is  : "<< qualityPoints(average) << endl ;
return 0;    
}

int qualityPoints(int average)
{
    if(average >= 90 && average<=100)   
	{       
	 return 4 ;
    }
    else if (average >= 80 && average<=89)
    {     
	return 3 ;
    }
    else if (average >= 70 && average<=79)
	{      
    return 2 ;
    }
    else if (average >= 60 && average<=69)
    {       
    return 1 ;
    }
    else
    {   
     return 0 ;
    }
    
}
