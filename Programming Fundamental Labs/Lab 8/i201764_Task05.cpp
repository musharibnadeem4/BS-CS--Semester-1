//Musharib
//i201764
#include <iostream>
using namespace std;
int main()
{
	int score=0,sum=0;
	float average=0;
	
	for(int x=1; x<=3; x++)
	{
		for(int y=1; y<=3; y++)
		{
			cout<<"Enter "<<x<< " Score of Player "<<x<<endl;
			cin>>score;
			sum += score;
		}
		average=sum/3;
		cout<<"The Average of Player " <<x<< " is : "<<average<<endl<<endl;
		sum=0;
	}
return 0;
}





