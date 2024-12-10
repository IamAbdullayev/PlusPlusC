#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>
using namespace std;


class Account {
	protected:
		int accountNumber;
		string accountHolder;
		double balance;

	public:
		Account();
		Account(int number, string name, double balance);

		void deposit(const double deposit);
		void withdraw(const double withdraw);
		double getBalance();
};


class SavingsAccount : public Account {
	public:
		SavingsAccount(int number, string name, double balance);

		void applyInterest(double interestRate);
};


class CheckingAccount : protected Account {
	public:
		CheckingAccount(int number, string name, double balance);

		void applyMonthlyFee(double fixedFee);
};


class CreditCardAccount : private Account {
	public:
		CreditCardAccount(int number, string name, double balance);

		void makePurchase(double fixedFee);
};


// ==== Implementation - Account ====
Account::Account() {
	this->accountNumber = 0;
	this->accountHolder = "User";
	this->balance = 0;
}

Account::Account(int number, string name, double balance) {
	this->accountNumber = number;
	this->accountHolder = name;
	this->balance = balance;
}

void Account::deposit(const double deposit) {
	if (deposit >= 1) {
		this->balance += deposit;
		cout << "Deposit: " << deposit << "; Balance: " << this->balance << endl;
	} else {
		cout << "[ Deposit >= 1 ]" << endl;
	}
}

void Account::withdraw(const double withdraw) {
	if (withdraw >= 1 && withdraw < this->balance) {
		this->balance -= withdraw;
		cout << "Withdraw: " << withdraw << "; Balance: " << this->balance << endl;
	}	else if (withdraw < 1) {
		cout << "[ Withdraw >= 1 ]" << endl;
	} else {
		cout << "Insufficient Funds" << endl;
	}
}

double Account::getBalance() {
	return this->balance;
}


// ==== Implementation - SavingsAccount ====
SavingsAccount::SavingsAccount(int number, string name, double balance) 
											: Account(number, name, balance) {}

void SavingsAccount::applyInterest(double interestRate) {
	if (interestRate > 0) {
		this->balance += (this->balance * interestRate);
		cout << "Interest Applied: " << interestRate << "; Balance: " << this->balance << endl;
	} else {
		cout << "[ interestRate > 0 ]" << endl;
	}
}


// ==== Implementation - CheckingAccount ====
CheckingAccount::CheckingAccount(int number, string name, double balance) 
											: Account(number, name, balance) {}

void CheckingAccount::applyMonthlyFee(double fixedFee) {
	if (fixedFee >= 1 && fixedFee < this->balance) {
		this->balance -= fixedFee;
		cout << "Monthly Fee Applied: " << fixedFee << "; Balance: " << this->balance << endl;
	} else if (fixedFee < 1) {
		cout << "[ Monthly Fee >= 1 ]" << endl;
	} else {
		cout << "Insufficient Funds" << endl;
	}
}
 

// ==== Implementation - CreditCardAccount ====
CreditCardAccount::CreditCardAccount(int number, string name, double balance) 
											: Account(number, name, balance) {}

void CreditCardAccount::makePurchase(double amount) {
	if (amount >= 1 && amount < this->balance) {
		this->balance -= amount;
		cout << "Purchase Made: " << amount << "; Balance: " << this->balance << endl;
	}
	else {
		cout << "Insufficient Funds" << endl;
	}
}

#endif