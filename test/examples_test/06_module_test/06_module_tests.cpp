#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank_balance variable")
{
	BankAccount account;
	account.deposit(40);
	
	REQUIRE(account.get_bank_balance() == 40);
}

TEST_CASE("test new bank account object balance")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test bank account deposit")
{
	BankAccount account;
	account.deposit(50);

	REQUIRE(account.get_balance() == 50);
}
TEST_CASE("Test bank account withdraw")
{
	BankAccount account;
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);
	account.withdraw(10);
	REQUIRE(account.get_balance() == 40);
}

TEST_CASE("test new bank account object balance is 100")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
}

