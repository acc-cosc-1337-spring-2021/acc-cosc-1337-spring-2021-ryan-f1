#include "bank_account.h"
#include "atm.h"
#include<string>
#include<iostream>
using std::string;
using std::cin;
using std::cout;

int main()
{



	BankAccount account = get_account(100);
	cout<<account;
	BankAccount account1;
	BankAccount account2;
	//BankAccount account3 = account + account1 + account2;
	cout<<"Bank balance: "<<account.get_bank_balance()<<"\n";
	BranchBank branch_account(100000);
	branch_account.update_balance(5000);
	cout<<"Branch Balance: "<<branch_account.get_branch_balance()<<"\n";
	cout<<"Bank Balance: "<<account.get_bank_balance()<<"\n";


	char choice;
	do
	{
		ATM atm;

		atm.scan_card();
		atm.display_balance();
		cout<<"Continue? Y/N: "<<"\n";
		cin>>choice;
		
	} while (choice == 'y' || choice == 'Y');
		


/*
	friend_display_balance(account);
	cout<<sizeof(account)<<"\n";
	auto balance = account.get_balance();

	cout<<"Balance: "<<balance<<"\n";
	return 0;
	*/
}