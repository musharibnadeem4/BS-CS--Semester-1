//Musharib
//i207164
#include <iostream>
using namespace std;
int main()
{
	int days = 7;
	int week = 4;
	for (int i = 1; i <= week; i++)
	{
		cout << "In Week: " << i << endl;
		for (int j= 1; j <= days; j++)
		{
			if (j == 1 || j == 3 || j == 5)
			{
				cout <<"Salary of the day  "<< j <<" is 20$" << endl;
			}

			else
			{
				cout<<"Salary of the day  "<< j << " 0$ ,As no work done!." << endl;
			}
		}
		cout << endl;
	}
	cout << "Total Salary of month  is :  " << 20 * 3 * 4 <<"$"<< endl;
	return 0;
}
