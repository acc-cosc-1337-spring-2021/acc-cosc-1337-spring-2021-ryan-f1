#include<iostream>
using std::cout; using std::cin;
#include "savings_account.h"
#include "checking_account.h"
#include "atm.h"
#include "bank_account.h"
#include<memory>
using std::unique_ptr; using std::make_unique;

int main()
{
	unique_ptr<SavingsAccount> savings = make_unique<SavingsAccount>(1000);
	cout<<"Balance: "<<savings->get_balance()<<"\n";
	cout<<"Interest Balance: "<<savings->get_balance_with_interest()<<"\n";

	unique_ptr<CheckingAccount> checking = make_unique<CheckingAccount>(500);
	cout<<"Balance: "<<checking->get_balance()<<"\n";

	return 0;
}