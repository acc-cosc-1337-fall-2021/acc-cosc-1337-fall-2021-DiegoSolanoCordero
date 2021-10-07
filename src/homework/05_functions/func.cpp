//add include statements
#include "func.h"
#include <string>
#include "iostream"
//add function code here
using std::string;
double get_gc_content (const std::string& dna)
{
    double gc=0;
    int i;
    for (int i=0; i<dna.size();++i)
    {
        if (dna[i] == 'C'|| dna[i] == 'G') 
        {
            gc=gc+1;
        }
    }
    gc=gc/dna.size();
    return gc;
}
string reverse_string (std::string dna)
{
    string reverse;
    int i;
    for (int i=0; i<dna.size();++i)
    { 
        reverse=(dna[i]+reverse);
    }
    return reverse;
}
string get_dna_complement (std::string dna)
{
    dna=reverse_string (dna);
    string complement="";
    int i;
    for (int i=0; i<dna.size();++i)
    {
        if (dna[i] == 'A')
        complement=complement + "T";
        if (dna[i] == 'T')
        complement=complement +('A');
        if (dna[i] == 'G')
        complement=complement +('C');
        if (dna[i] == 'C')
        complement=complement +('G');
    }   
    return complement;
}
