//i201764
//Musharib
#include <iostream>
using namespace std;
int main()
{
	int purchase,Discount, cost_with_dis;
	cout<<"Enter amount of purchase"<<endl;
	cin>>purchase;
	if(purchase>2000)
	{
	   Discount=(purchase)*(10/100.0);
	   cost_with_dis=purchase-Discount;
	   cout<<"Cost with Discount is :"<<cost_with_dis<<endl;
       cout<<"Cost without Discount is :"<<purchase<<endl;
    }
	else
	{
	   cout<<"Cost without Discount is :"<<purchase<<endl;
	   cout<<"You have been credited with no Discount"<<endl;
	}
	
	return 0;
}
