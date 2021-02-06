//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>
using std::cout; using std::cin;

int main() 
{
	int num, result, num1;
	cout << "type a number to multiply it by 5: ";
	cin >> num;
	result = multiply_numbers(num);
	cout << "The result is: " << result <<"\n";
	num1 = 4;
	result = multiply_numbers(num1);
	cout << "and here is 4 times 5: " << result;
	return 0;
}

