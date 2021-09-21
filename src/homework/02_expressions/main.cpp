﻿//write include statements
#include "hwexpressions.h"
#include "iostream"

//write namespace using statement for cout
using std::cout;
using std::cin; 
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_ammount;//set initial variables
	double tip_rate;
	double tip_ammount;
	double tax_ammount;
	double total;
	cout<<"Enter your meal ammount: ";//Ask for meal ammount
	cin>>meal_ammount;
	tax_ammount= get_sales_tax(meal_ammount);//Get the Sales Tax
	cout<<"Enter your tip rate (NO PERCENTAGE): ";//Ask for Tip rate
	cin>>tip_rate;
	tip_ammount= get_tip_ammount(meal_ammount,tip_rate); //Get Tip ammount
	total= tip_ammount+tax_ammount+meal_ammount; //Get Total
	cout<<"Your reciept would be :"<<"\n";//Give Reciept
	cout<<"Meal Ammount :"<<meal_ammount<<"\n";
	cout<<"Sales Tax :"<<tax_ammount<<"\n";
	cout<<"Tip Ammount :"<<tip_ammount<<"\n";
	cout<<"Total :"<<total<<"\n";
	return 0;
}
