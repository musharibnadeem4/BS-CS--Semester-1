//Musharib
//i201764
//Task 2
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int flip(); 
 
int main()
{
   srand( time(0) );
   int tails_count = 0;
   int heads_count = 0;
 
   for( int i = 1; i <= 100; i++)
   {
   	int x = flip() ;
      if(x == 0)
      {
         cout << "Tails" << endl;
         tails_count ++;
      }
      else
      {
         cout<<"Heads"<<endl;
         heads_count ++;
      }
 
   }
   cout << "Tails count is : " << tails_count<<endl;
   cout << "Heads count is : " << heads_count << endl;
   return 0;
}
 
int flip()
{
    if (rand() % 2)
    	return 0;
    else 
    	return 1 ;
}
