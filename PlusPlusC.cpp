#include "bank_accounts.h"


int main()
{

	BankAccount account_1(101, "Sarah", 1250.5);

	account_1.checkBalance();

	account_1.deposit(250.5);

	account_1.checkBalance();

	account_1.withdraw(500);

	account_1.checkBalance();
}