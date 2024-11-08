#include "bank.h"


int main()
{
	{
		BankAccount* account1 = new BankAccount(100);
		BankAccount* account2 = new BankAccount(1200);
		BankAccount* account3 = new BankAccount(1700);

    account1->deposit(1000);
    account2->withdraw(500);

		cout << "Balance of account 1: " << account1->getBalance() << endl;
		cout << "Balance of account 2: " << account2->getBalance() << endl;
		cout << "Balance of account 3: " << account3->getBalance() << endl;

		delete account1;
		delete account2;
		delete account3;
	}

	BankAccount* account1 = new BankAccount(5000);
	cout << "Balance of account1: " << (*account1).getBalance() << endl;
	delete account1;

	return 0;
}