//write includes statements
#include"loops.h"
#include<iostream>
//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	char again;
	do{
		int num;
		do{
			cout<<"Enter a valid integer from 1 to 10: ";
			cin>>num;
		} while(!(num > 0 && num < 11));

		cout<<"here is "<<num<<" factorial: "<<factorial(num)<<"\n";

		cout<<"Would you like to calculate another factorial? [Y/N]\n";
		cin>>again;
	} while(again == 'y' || again == 'Y');

	return 0;
}