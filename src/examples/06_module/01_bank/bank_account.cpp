//bank_account.cpp
#include "bank_account.h"
#include<iostream>
using std::cout;

void BranchBank::update_balance(int b)
{
    branch_balance += b;
    BankAccount::bank_balance += b;
}

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
    std::cout<<"Friend Display Account - Balance is: "<<a.balance<<"\n";
}

std::ostream& operator<<(std::ostream& out, const BankAccount& a)
{
    out<<"Display Account--Balance is: "<<a.get_balance();

    return out;
}

BankAccount operator+(const BankAccount& a1, const BankAccount& a2)
{
    BankAccount account(a1.balance+a1.balance);

    return account;
}

std::istream& operator>>(std::istream& in, BankAccount& a)
{
    int amount;
    std::cout<<"Enter amount: ";
    in>>amount;
    a.balance += amount;

    return in;
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