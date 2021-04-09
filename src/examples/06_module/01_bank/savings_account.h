//savings_account.h
#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "bank_account.h"

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(){};
    SavingsAccount(int b) : BankAccount(b){};
    int get_balance()const{return balance * 0.05 * 3/12 + balance;}
    double get_balance_with_interest();
};


#endif