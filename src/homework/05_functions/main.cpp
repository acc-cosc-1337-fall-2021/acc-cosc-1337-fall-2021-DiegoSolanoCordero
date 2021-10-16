/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include "func.h"
#include <string>
#include "iostream"
using std::string;
using std::cin;
using std::cout;
string dna;
int main()
{
	cout<<"Enter your Strand of DNA: ";//Ask for strand
			cin>>dna;
	int Menu;
	double GCresult;
	string Complementresult;
	while (Menu!= 3)
	{
		cout<<"1-Get GC Content\n"<<"2 Get DNA Complement\n"<<"3-Exit\n";//Ask for menu option
		cin>>Menu;
		switch(Menu)
		{
			case 1:
			cout<<"Option 1 selected\n";
			GCresult=get_gc_content (dna);
			cout<<"The GC content would be :"<<GCresult<<"\n";
			break;
			case 2:
			cout<<"Option 2 selected\n";
			dna=reverse_string (dna);
			Complementresult=get_dna_complement (dna);
			cout<<"The Reverse Complement would be :"<<Complementresult<<"\n";
			break;
		}
	}
	return 0;
}
