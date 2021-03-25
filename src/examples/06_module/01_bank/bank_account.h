//bank_account.h
class BankAccount
{
public:
    BankAccount(){}
    BankAccount(int b) : balance(b){}
    int get_balance()const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);

private:
    int balance{0};
    int cust_id;
};

void display_account(BankAccount account);
BankAccount get_account(int amount);