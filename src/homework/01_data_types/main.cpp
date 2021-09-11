//write include statements
#include "data_types.h"
#include "iostream"

//write namespace using statement for cout
using std::cout;
using std::cin; 

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int result;
	int num;
	int num1=4;
	//Test 1 with multiply_number
	cout<<"Enter a number and press enter: ";
	cin>>num;
	result = multiply_numbers(num);
	cout<<"Your number is :"<< num <<"\n";
	cout<<"Your result using multiply_numbers with num is :"<<result<<"\n";	
	
    //Test 2 with num1=4
	result = multiply_numbers(num1);
	cout<<"Your result using multiply_numbers with num1 is :"<<result<<"\n";
	
}	
		