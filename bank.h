#ifndef BANK_H
#define BANK_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include "bank_account.h"
using namespace std;



class Bank {
	private:
		int numAccounts;

		// Dynamic array of objects
		BankAccount* accounts1;

		// Dynamic array of pointers to objects
		BankAccount** accounts2;

	public:
		// Constructor
		Bank() = default;
		Bank(int);

		// Destructor
		~Bank ();

		// Member functions
		void performTransactions();
		void displayAllBalances() const;

};




// Implementation
Bank::Bank(int num) {
	this->numAccounts = num;

	// Dynamic array of objects
	accounts1 = new BankAccount[num];
	for (int i = 0; i < this->numAccounts; ++i) {
		accounts1[i] = BankAccount(i + 1);
	}


	// Dynamic array of pointers to objects
	accounts2 = new BankAccount*[num];
	for (int i = 0; i < this->numAccounts; ++i) {
		accounts2[i] = new BankAccount(i + 1);
	}
}

Bank::~Bank () {
	// Dynamic array of objects
	delete[] accounts1;


	// Dynamic array of pointers to objects
	for (int i = 0; i < this->numAccounts; ++i) {
		delete accounts2[i];
	}
	delete[] accounts2;
}
	


void Bank::performTransactions() {
	// Dynamic array of objects
	for (int i = 0; i < this->numAccounts; ++i) {
		accounts1[i].deposit(500 - (i * 100));
	}
	cout << endl;


	// Dynamic array of pointers to objects
	for (int i = 0; i < this->numAccounts; ++i) {
		// (*accounts2[i]).deposit(500 - (i * 100));
		accounts2[i]->deposit(500 - (i * 100));
	}
}



void Bank::displayAllBalances() const {
	// Dynamic array of objects
	for (int i = 0; i < this->numAccounts; ++i) {
		accounts1[i].displayBalance();
	}
	cout << endl;


	// Dynamic array of pointers to objects
	for (int i = 0; i < this->numAccounts; ++i) {
		// accounts2[i]->displayBalance();
		(*accounts2[i]).displayBalance();
	}
}






#endif