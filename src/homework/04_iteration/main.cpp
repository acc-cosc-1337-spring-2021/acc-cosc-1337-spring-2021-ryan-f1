//write include statements
#include "dna.h"
#include<iostream>
//write using statements
using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char again;
	char choice;
	string entered_sequence;

	do
	{
		cout<<"Select mode\n";
		cout<<"[1]: Get GC content of DNA\n";
		cout<<"[2]: Get compliment of DNA\n";
		cin>>choice;
		switch (choice)
		{
			case '1':
				cout<<"Enter a DNA string: ";
				cin>>entered_sequence;
				cout<<"The GC content of "<<entered_sequence<<"\nis: "<<get_gc_content(entered_sequence)<<"\n";
				break;
			
			case '2':
				cout<<"Enter a DNA string: ";
				cin>>entered_sequence;
				cout<<"The compliment of "<<entered_sequence<<"\nis: "<<get_dna_complement(entered_sequence)<<"\n";
				break;
		}

		cout<<"Press y to quit\nPress something else to use another mode\n";
		cin>>again;
	} while (!(again == 'y'));
	


	return 0;
}