//Musharib
//i201764
//Assignment 4
#include <iostream>
using namespace std;
int main(){
	int low,high,count=0,sum=0;
	
	/*Taking user input*/
	
	cout<<"Enter first number :";
	cin>>low;
	cout<<"Enter second number : ";
	cin>>high;
	
	cout<<"Prime numbers form "<<low<<" to "<<high<<" = ";
	
	/*Loop for finding the prime numbers between the given range*/
	
	while(low<=high){       
	
		int count1=0;
		for(int i=1;i<=low;i++){
			if(low%i==0){
				count1++;
				
			}
		}
		if(count1==2){
			cout<<low<<" ";
			count++;
			sum+=low;   //Calculating the sum of numbers
		}
		low++;
	}
	
	/*Displaying the input*/
	
	cout<<endl<<"Total count :"<<count<<endl;
	cout<<"Sum of numbers is "<<sum<<endl;

	return 0;
}

