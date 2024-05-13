//Musharib
//i201764
#include <iostream>
using namespace std;
int main()
{

    float c,f=1.0;
    	cout<<"Enter Temperature in farenheit"<<endl;
    	cin>>f;
    
    while(f != 0){
        c=((5.0/9.0)*(f-32));
        cout<<"Temperature in celsius is "<<c<<endl;
        cout<<"Enter Temperature in farenheit"<<endl;
    	cin>>f;
        
        }
  cout<<"Program ended because you entered 0"<<endl;


return 0;

}
