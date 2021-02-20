//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin
#include<iostream>
using std::cout; using std::cin;

int main() 
{

	cout<<"Input a number grade to convert to a letter grade: ";
	int grade;
	std::string letter_grade;
	cin>>grade;

	if(!(grade < 0 || grade > 100))
	{
		letter_grade = get_letter_grade_using_if(grade);
		cout<<"\n [Using if/else if method] Your grade is: "<< letter_grade;

		letter_grade = get_letter_grade_using_switch(grade);
		cout<<"\n [Using switch method] Your grade is: "<< letter_grade;

	}
	else 
	{
		cout<<"Error: Number out of range.";
	}

	return 0;
}

