//write include statements
#include "variables.h"
#include <iostream>

//write namespace using statement for cout
using std::cout; using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate;

	cout<<"Input the cost of the meal: ";
	cin>>meal_amount;

	double tax_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Input the tip rate: ";
	cin>>tip_rate;

	double tip_amount;
	tip_amount = get_tip_amount(meal_amount,tip_rate);

	double total;
	total = tip_amount + tax_amount + meal_amount;

	cout<< "Meal Amount: "<< meal_amount << "\n";
	cout<< "Sales Tax: "<< tax_amount << "\n";
	cout<< "Tip Amount: "<< tip_amount << "\n";
	cout<< "Total: "<< total;

	return 0;
}
