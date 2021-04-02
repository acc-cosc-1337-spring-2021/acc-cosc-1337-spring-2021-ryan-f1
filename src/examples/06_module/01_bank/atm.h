//atm.h
#ifndef ATM_H
#define ATM_H
#include "bank_account.h"
#include<stdlib.h>
#include<vector>

class ATM
{
public:
    ATM();
    void display_balance()const;
    void scan_card();

private:
    BankAccount& account;
    int get_balance_from_DB();
    std::vector<BankAccount> accounts;
    int customer_index;
};


#endif