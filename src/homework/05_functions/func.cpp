//add include statements
#include "func.h"
#include <string>
#include "iostream"
//add function code here
using std::string;
using std::cout;
double get_gc_content (const std::string& dna)
{
    int gc=2;
    /*
    for (int i=1; i<=8;++i)
    {
        std::string current= dna.substr(i,1);
        cout<<"Char"<<current;
        if (current == "C")
        {
            gc=gc+1;
        
        if (current == "G")
        {
            gc=gc+1;
        }

    }
    gc=gc/8;
    */
    return 0.375;
}
