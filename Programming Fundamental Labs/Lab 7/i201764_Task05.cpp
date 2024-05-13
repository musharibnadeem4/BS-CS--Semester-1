//Musharib
//i201764
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
int total=100,sum=0,count=0,lim=100;

srand(time(0));
int n=(rand()%lim)+1;
lim=lim-n;
sum=sum+n;
count++;
cout<<"The Price of Item is : "<<n<<endl;

while(sum<=total && lim!=0)
{
	n=(rand()%lim)+1;
lim=lim-n;
sum=sum+n;

cout<<"The Price of Item : "<<n<<endl;
count++;
}
cout<<"Total Items You Purchased are : "<<count<<endl;
return 0;
}


