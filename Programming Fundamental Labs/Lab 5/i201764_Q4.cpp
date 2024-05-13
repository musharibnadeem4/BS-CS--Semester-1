//Musharib 
//i201764
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double FR,SR;
	double a,b,c;
	cout<<"Enter value of a"<<endl;
	cin>>a;
	cout<<"Enter value of b"<<endl;
	cin>>b;
	cout<<"Enter value of c"<<endl;
	cin>>c;
	FR=(-1*b)+sqrt(pow(b,2)-4*a*c)/2*a;
	SR=(-1*b)-sqrt(pow(b,2)-4*a*c)/2*a;
	cout<<"First Root = "<<FR<<endl;
	cout<<"Second Root = "<<SR<<endl;
	
	return   0;
	
}
