#include <iostream>
using namespace std;
  
int main() {
    int marks;
      
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    
    marks>=90 && marks<100 ? cout<<"A+ Grade" :
    marks>=80 && marks<=89 ? cout<<"A grade"    :
   	marks>=70 && marks<=79 ? cout<<"B grade"    :
   	marks>=60 && marks<=69 ? cout<<"C grade"    :
   	marks>=50 && marks<=59 ? cout<<"D grade"    :  cout<<"F Grade";
   return 0;
    
      
    return 0;
}

