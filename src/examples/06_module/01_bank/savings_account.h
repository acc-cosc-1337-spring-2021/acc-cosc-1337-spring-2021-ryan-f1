//savings_account.h
#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "bank_account.h"

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(){};
    SavingsAccount(int b) : BankAccount(b){};
    int get_balance()const{return balance * interest_rate * time + balance;}
    double get_balance_with_interest();
private:
    const double interest_rate{0.05};//uses 8 more bytes
    const double time{3/12};
};


#endif