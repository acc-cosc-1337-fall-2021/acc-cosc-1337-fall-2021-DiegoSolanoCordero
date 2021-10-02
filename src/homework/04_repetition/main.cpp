//write include statements
#include "dna.h"
#include "iostream"
//write using statements
using std::cout;
using std::cin; 
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
int Menu;
int num;
int num1;
int num2;
int result; 
while (Menu!= 3)
{
	cout<<"Press 1 for Factorial\n"<<"Press 2 for GCD\n"<<"Press 3 to Exit\n";//Ask for menu option
	cin>>Menu;
	switch(Menu)
    {
        case 1: 
        cout<<"Option 1 selected\n";
		cout<<"Enter your factorial number: ";//Ask for number to factorial
		cin>>num;
		result= factorial(num); //Call If Function
		cout<<"The factorial of your number would be:"<<result<<"\n";
        break;
        case 2:
        cout<< "Option 2 selected\n";
		cout<<"Enter your first number to use gcd: ";//Ask for number 1
		cin>>num1;
		cout<<"Enter your second number to use gcd: ";//Ask for number 2
		cin>>num2;
		result= gcd(num1,num2); //Call Switch Function
		cout<<"The greatest commond divisor would be:"<<result<<"\n";
        break;
		case 3:
        cout<< "Program has ended\n";
        break;
		default:
        cout<< "Invalid option";
        break;
	}
}
return 0;
}