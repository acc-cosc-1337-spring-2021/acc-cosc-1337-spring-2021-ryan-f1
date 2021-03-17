//bank_account.cpp
#include "bank_account.h"
#include<iostream>
using std::cout;

int main()
{
    BankAccount account;
    cout<<sizeof(account)<<"\n";
    auto balance = account.get_balance();

    cout<<"the balance is: "<<balance;
}