//bank_account.cpp
#include "bank_account.h"
#include<iostream>
using std::cout;

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
        bank_balance -= amount;
    }
}

int BankAccount::bank_balance = 0;

//FRIEND FUNCTION - also a free function
void friend_display_balance(const BankAccount& account)
{
    std::cout<<"Friend Display Account - Balance is: "<<account.balance<<"\n";
}

//free functions-not part of the Bank account class
void display_account(BankAccount account)
{
    cout<<"Balance is: "<<account.get_balance()<<"\n";
}

BankAccount get_account(int amount)
{
    BankAccount account(amount);
    return account;
}