//i201764
//Musharib
#include <iostream>
using namespace std;
int main()
{
	float total_classes,classes_attended,percentage;
	cout<<"Enter total Number of classes held during semester "<<endl;
	cin>>total_classes;
	cout<<"Enter Number of classes you attended "<<endl;
	cin>>classes_attended;
	percentage = (classes_attended/total_classes)*100.0;
	cout<<"Your Attendance is  "<<percentage <<" %"<<endl;
	if(percentage >= 75)
	{
	cout<<"You are allowed to sit in exam"<<endl;
    }
	else
	{
	cout<<"You are not allowed to sit in exam"<<endl;
	}
	return 0;
	
}
