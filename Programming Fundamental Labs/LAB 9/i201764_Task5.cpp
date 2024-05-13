//Musharib
//i201764
#include <iostream>
using namespace std;
int main()
{
	int num, i = 2;  //Initialized from two as table should be printed from table of 2
	cout<<"Enter Your Number: "<<endl;
	cin >> num;
	while (i <= num)
	{
	    for (int j = 1; j <= 10; ++j)     //To print table till 10
	    {
	    cout<< num << " * " << i << " = " << num * j << endl;    //Printing tables
	    }
	    cout<<endl;
	    i++;
	}
return 0;
}

