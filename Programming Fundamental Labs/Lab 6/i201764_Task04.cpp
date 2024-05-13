#include <iostream>
using namespace std;
  
int main() {
    char oper;
    int num1, num2;
      
    cout<<"Enter an arithemetic operator(+ - * / %)"<<endl;
    cin>>oper;
    cout<<"Enter two numbers as operands"<<endl;
    cin>>num1;
    cin>>num2;
    
  
    switch(oper) {
	
        case '+': 
                cout << num1 << " + " << num2 << " = " << num1+num2;
                break;
        case '-':
                cout << num1 << " - " << num2 << " = " << num1-num2;
                break;
        case '*':
                cout << num1 << " * " << num2 << " = " << num1*num2;
                break;
        case '%':
                cout << num1 << " % " << num2 << " = " << num1 % num2;
                break;
        case '/':
        	switch(num2==0){
        		cout<<"Number cannot be zero"<<endl;
			
                cout << num1 << " / " << num2 << " = " << num1/num2;
                break; }     
        default: 
                cout<<"Invalid input"<<endl;
    }
      
    return 0;
}
