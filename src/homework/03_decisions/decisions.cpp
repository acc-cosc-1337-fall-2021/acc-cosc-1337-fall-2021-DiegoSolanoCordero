//write include statement for decisions header
#include "decisions.h"
#include <string>

//Write code for function(s) code here
using std::string;

string get_letter_grade_using_if(int grade);
{
    if(grade >= 90 && grade <=100 )
    return "A";
    else if (grade >= 80 && grade <=89 )
    return "B";
    else if (grade >= 70 && grade <=79 )
    return "C";
    else if (grade >= 60 && grade <=69 )
    return "D";
    else if (grade >= 00 && grade <=59 )
    return "F";
    else 
    return "Invalid grade";
}
using std::string; string get_letter_grade_using_switch(int grade);
{
    switch(int grade);
    {
        case grade >= 90 && grade <=100 : 
        return "A";
        break
        case grade >= 80 && grade <=89 :
        return "B";
        break
        case grade >= 70 && grade <=79 :
        return "C";
        break
        case grade >= 60 && grade <=69 :
        return "D";
        break
        case grade >= 00 && grade <=59:
        return "F";
        break
        default:
        return "Invalid grade";
        break

    }
    return result;
}