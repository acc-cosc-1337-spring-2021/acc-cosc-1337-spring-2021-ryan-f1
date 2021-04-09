//savings_account.cpp
#include "savings_account.h"

double SavingsAccount::get_balance_with_interest()
{
    double interest_earned = BankAccount::get_balance() * 0.05 * 3/12 + balance;

    return interest_earned + BankAccount::get_balance();
}