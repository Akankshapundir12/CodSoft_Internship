//TASK 2
// SIMPLE CALCULATOR
/** Program that performs basic arithmentic operations such as
    addition,subtraction,multiplication,dicision and modolus.
    Allow the user to input two numbers and choose an operation to perform. - By Akanksha Pundir **/
#include<iostream>
using namespace std;
int main() {
    cout<<"\n\t<---------------------  CODSOFT INTERNSHIP  -------------------->"<<endl;
	cout<<"\n\t*****************************************************************";
	cout<<endl;
	cout<<endl;
	cout<<"\n\t\t\t***********  TASK 2  ***********\n";

	cout << "\n\t\t\tWelcome to Simple Calculator!"
		<< endl; 
    char op;
    int num1,num2;
    cout<<"Enter the operator( +,- ,*,/,% ) :   "<<endl;
    cin>>op;
    cout<<" Enter number one by one :  "<<endl;
    cin>> num1 >> num2;
    switch ( op )  {
        case '+':
            cout<< num1 << " + " << num2 << " = " << ( num1 + num2 );
            break;
        case '-':
            cout<< num1 << " - " << num2 << " = " << ( num1- num2 );
            break;
        case '*':
            cout<< num1 << " * " << num2 << " = " << ( num1 * num2 );
            break;
        case '/':
           if ( num2 != 0.0 )
            cout<< num1 << " / " << num2 << " = " << ( float)( num1 / num2 );
           else 
            cout<< " Divide by Zero situation ";
            break;
        case '%':
            cout<< num1 << " % " << num2 << " = " << ( num1 % num2 );
            break;
        default:
        cout<< op << " Is an invalid operator ";
        
    }
    return 0;
}