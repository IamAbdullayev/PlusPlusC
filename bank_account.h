#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;



class BankAccount {
	private:
		// Private members
		int accountNumber;
		double balance;

	public:
		// Constructor
		BankAccount() = default;
		BankAccount(int);

		// Member functions
		void deposit(double);
		void withdraw(double);
		void displayBalance();

};




// Implementation
BankAccount::BankAccount(int accNumber) {
	this->accountNumber = accNumber;
	this->balance = 0;
};

void BankAccount::deposit(double amount) {
	if (amount > 0) {
		this->balance += amount;
	}
};

void BankAccount::withdraw(double amount) {
	if (amount > 0) {
		this->balance -= amount;
	}
};

void BankAccount::displayBalance() {
	cout << "Balance of account " << this->accountNumber << ": " << this->balance << endl;
};




#endif