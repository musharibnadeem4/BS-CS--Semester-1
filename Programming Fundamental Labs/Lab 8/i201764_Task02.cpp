//Musharib
//i201764
#include <iostream>
using namespace std;
int main()
{
float total=1000.0, amount=1000.0, rate=1.04f;


	for(int i=1; i<11; i++)
	{
		amount=total;
		total*=(rate);
		cout<<"In year  " <<i<< "the increment  is: " <<total-amount<<endl;
		cout<<"The Incremented Savings in the Year " <<i<<" is: "<<total<<endl<<endl; 
	}
	
	cout<<"Total Amount "<<total<<endl;
return 0;
}
