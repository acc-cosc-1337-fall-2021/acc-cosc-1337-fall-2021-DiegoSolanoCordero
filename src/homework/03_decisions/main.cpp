//write include statements
#include "decisions.h"
#include "iostream"
#include <string>
using std::cout;
using std::cin; 
using std::string;

int main() 
{
	int grade;
	int Menu;
	std::string result;
	cout<<"Enter your grade: ";//Ask for grade
	cin>>grade;
	cout<<"Press 1 to find grade with If. Press 2 to find grade with switch: ";//Ask for calculating method
	cin>>Menu;
	switch(Menu)
    {
        case 1: 
        cout<<"Option 1 selected\n";
		result= get_letter_grade_using_if(grade); //Call If Function
		cout<<"Your grade would be:"<<result<<"\n";
        break;
        case 2:
        cout<< "Option 2 selected\n";
		result= get_letter_grade_using_switch(grade); //Call Switch Function
		cout<<"Your grade would be:"<<result<<"\n";
        break;
		default:
        cout<< "Invalid grade";
        break;
	}

}