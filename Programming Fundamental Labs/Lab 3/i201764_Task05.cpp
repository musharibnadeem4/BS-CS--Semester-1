//i210764
//Musahrib
#include <iostream>
using namespace std;
int main()
{
	int salep1,saleq1,salep2,saleq2,sale1,sale2,total_sale,tax,sale_with_tax;
	cout<<"Enter Sale price for item 1"<<endl;
	cin>>salep1;
	cout<<"Enter Sale quantity for item 1"<<endl;
	cin>>saleq1;
	cout<<" Enter Sale price item 2"<<endl;
	cin>>salep2;
	cout<<"Enter Sale quantity for item 2"<<endl;
	cin>>saleq2;
	sale1=salep1*saleq1;
	cout<<"Sales Amount for Item 1 : "<<sale1<<endl;
	sale2=salep2*saleq2;
	cout<<"Sale Amount for Item 2 : "<<sale2<<endl;
	total_sale=sale1+sale2;
	cout<<"Total Sale without tax : "<<total_sale<<endl;
	tax=total_sale*(10/100.0);
	sale_with_tax=total_sale-tax;
	cout<<"Sale amount excluding tax :"<<sale_with_tax<<endl;
	
	return 0;
	
	
	
	
	
}
