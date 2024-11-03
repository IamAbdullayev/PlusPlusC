#ifndef USERSTRUCT_H
#define USERSTRUCT_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;


class BankAccount {
	// Private member variables
	int accountNumber;
	string holderName;
	double balance;

	public:
		// Constructors
		BankAccount() {
			accountNumber = 1;
			holderName = "Anonim";
			balance = 0.0;
		}
		BankAccount(const int& accountNumber, const string& holderName, const double& initialBalance) {
			this->accountNumber = accountNumber;
			this->holderName = holderName;
			this->balance = initialBalance;
		}

		// Member functions
		void deposit(const double& cash) {
			if (cash > 0) balance += cash;
		}

		void withdraw(const double& cash) {
			if (cash > 0 && cash <= balance) balance -= cash;
		}

		void checkBalance() {
			cout << holderName << " ( #" << accountNumber << " )" << endl;
			cout << "Balance: " << balance << endl;
		}
	


};



#endif