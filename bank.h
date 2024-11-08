#ifndef BANK_H
#define BANK_H


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
		static int ID;
		int* accountNumber = new int;
		double balance;

	public:
		// Constructor
		BankAccount ();

		// Parameterized constructor
		BankAccount (const double&);

		// Destructor
		~BankAccount ();

		// Member function
		void deposit(const double&);
		void withdraw(const double&);
		
		// Getters
		double getBalance() const;

};


// Static variable
int BankAccount::ID = 1;

// implementation
BankAccount::BankAccount () {
	*accountNumber = ID++;
	this->balance = 0;
	cout << "Account " << *accountNumber << " created." << endl;
}

BankAccount::BankAccount (const double& initialBalance) {
	*accountNumber = ID++;
	this->balance = initialBalance;
	cout << "Account " << *accountNumber << " created." << endl;
}

BankAccount::~BankAccount () {
	--ID;
	cout << "Account " << *accountNumber << " closed.\n";
	delete accountNumber;
}

void BankAccount::deposit(const double& cashIn) {
	if (cashIn > 0) {
		this->balance += cashIn;
	}
}

void BankAccount::withdraw(const double& cashOut){
	if (cashOut > 0) {
		this-> balance -= cashOut;
	}
}

double BankAccount::getBalance() const {
	return this->balance;
}




#endif