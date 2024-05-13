//Musharib
//i201764
//Labtask3
#include <iostream>
using namespace std;
int main()
{
	int num;
	int *p= new int[num];
	int mini,maxi;
	/*Taking user Input*/
	cout << "How many numbers you want to enter? "<<endl;
	cin >> num;
	
	for(int i=0 ; i<num ; i++)
	{
		cout << "Arr[" << i+1 << "]: ";
		cin>>p[i];	
    }
	
	mini=maxi=*p;
	/*Checking for minimum and maximum number in given input*/
	for(int j=0; j<num; j++)
	{
		if(mini>p[j])   
		{
			mini=p[j];	
		}
		
		if(maxi<p[j])
		{
			maxi=p[j];
		}
	}	
	
	delete []p;
	/*Displaying output*/
	cout<<"Greatest Element: " <<maxi<<endl;
	cout<<"Smallest Element: " <<mini<<endl;
	
	
	return 0;
}
