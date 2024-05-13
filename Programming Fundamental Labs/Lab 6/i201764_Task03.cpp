#include <iostream>
using namespace std;
  
int main() {
	char ch;
	cout<<"Enter any Character"<<endl;
	cin.get(ch);
	switch((ch>=65 && ch<=90) || (ch>=97 && ch<=127))
	{
		case 1:
			cout<<"This is a alphabet"<<endl;
			break;
		case 0:
			switch(ch>=48 && ch<=57)
			{
				case 1:
					cout<<"This is a digit"<<endl;
					break;
				case 0:
				    cout<<"This is a special Character"<<endl;
				    break;
			}
			break;
			
	}
	return 0;
}
	
	
		
	
