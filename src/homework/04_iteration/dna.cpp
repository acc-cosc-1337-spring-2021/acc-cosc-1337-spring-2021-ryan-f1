#include "dna.h"

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    int count;
    double gc_count = 0;
    for(count = 0; count <= dna.length(); count++)
    {
        if (dna[count] == 'G' || dna[count] == 'C')
        {
            gc_count += 1;
        }
    }
    return (gc_count / dna.length());
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    int count;
    string dna_reversed;
    for(count = dna.length() -1; count >= 0; count--)
    {
        dna_reversed.push_back(dna[count]);
    }
    return dna_reversed;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
    int count;
    string dna_compliment;

    for(count = 0; count <= dna.length(); count++)
    {
        switch (get_reverse_string(dna)[count])
        {
        case 'A':
            dna_compliment += 'T';
            break;
        
        case 'T':
            dna_compliment += 'A';
            break;
        case 'C':
            dna_compliment += 'G';
            break;
        case 'G':
            dna_compliment += 'C';
            break;
        }
    }
    return dna_compliment;
}
