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
string get_dna_complement (std::string dna)
{
    string complement;
    int i;
    for (int i=0; i<dna.size();++i)
    { 
        complement.append(dna[i]);
    }
    return complement;
}
string reverse_string (std::string dna)
{
    string reverse;
     int i;
    for (int i=0; i<dna.size();++i)
    {
     if (dna[i] == 'A')
     reverse.append('T');
     if (dna[i] == 'T')
     reverse.append('A');
     if (dna[i] == 'G')
     reverse.append('C');
     if (dna[i] == 'C')
     reverse.append('G');
    }   
    return reverse;
}
