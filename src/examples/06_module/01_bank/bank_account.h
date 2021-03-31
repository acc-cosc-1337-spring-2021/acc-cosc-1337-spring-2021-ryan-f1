//bank_account.h
class BankAccount
{
friend void friend_display_balance(const BankAccount& account);

public:
    BankAccount(){}
    BankAccount(int b) : balance(b){bank_balance += b;}
    int get_balance()const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}

private:
    int balance{0};
    static int bank_balance;
    int cust_id;
};

void display_account(BankAccount account);
BankAccount get_account(int amount);