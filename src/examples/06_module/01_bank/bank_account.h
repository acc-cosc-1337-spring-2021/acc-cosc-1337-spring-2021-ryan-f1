//bank_account.h
#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H

class BranchBank
{
public:
    BranchBank(int b) : branch_balance(b){}
    void update_balance(int b);
    int get_branch_balance()const {return branch_balance;}


private:
    static int branch_balance;
};

#endif


#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<iostream>

class BankAccount
{
friend void friend_display_balance(const BankAccount& account);
friend void BranchBank::update_balance(int b);
friend std::ostream& operator<<(std::ostream& out, const BankAccount& a);
friend BankAccount operator+(const BankAccount& a1, const BankAccount& a2);
friend std::istream& operator>>(std::istream& in, const BankAccount& a);


public:
    BankAccount() = default;
    BankAccount(int b) : balance(b){bank_balance += b;}
    int get_balance()const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}

private:
    int balance{0};
    static int bank_balance;

};

void display_account(const BankAccount& account);
BankAccount get_account(int amount);

#endif