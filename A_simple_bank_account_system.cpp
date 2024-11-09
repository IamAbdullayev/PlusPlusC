#include "bank.h"


int main()
{
/* 	
	// Test:

	BankAccount acc1(1);
	BankAccount acc2(2);
	BankAccount acc3(3);

	acc1.deposit(150);
	acc2.deposit(300);
	acc3.deposit(450);

	acc1.withdraw(50);
	acc2.withdraw(100);
	acc3.withdraw(150);

	acc1.displayBalance();
	acc2.displayBalance();
	acc3.displayBalance();

 */
	
	
	Bank bank(5);

	bank.performTransactions();
	bank.displayAllBalances();

	return 0;

}