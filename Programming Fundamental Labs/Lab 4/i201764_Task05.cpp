//i201764
//Musharib
#include <iostream>
using namespace std;
int main()
{
	float score;
	cout<<"Enter your scores"<<endl;
	cin>>score;
	if(score>=90 && score<=100)
	cout<<"Your Grade is A+"<<endl;
	else if(score>=80 && score<=89)
	cout<<"Your grade is A"<<endl;
	else if(score>=70 && score<=79)
	cout<<"Your grade is B"<<endl;
	else if(score>=60 && score<=69)
	cout<<"Your grade is C"<<endl;
	else if(score>=50 && score<=59)
	cout<<"Your grade is D"<<endl;
	else if(score<50)
	cout<<"You have achieved an F grade"<<endl;
	else
	cout<<"Invalid Input"<<endl;
	
	return 0;
	
}
