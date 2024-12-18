#include <iostream>
#include <string>

using namespace std;


class Account {
	protected:
		int accountNumber;
		double balance;

  public:
		Account(const int accountNumber, const double balance) 
						: accountNumber(accountNumber), balance(balance) {}
			
		virtual ~Account() {}

    virtual void deposit(double amount) {
			if (amount > 0)
				this->balance += amount;
		}

    virtual void withdraw(double amount) {
			this->balance -= amount;
		}

    virtual void displayBalance() const {
			cout << "Balance " << "(ID: " << this->accountNumber << ")" << ": " << this->balance << endl;
		}
};


class SavingsAccount : public Account {
	private:
		double interestRate;

  public:
		SavingsAccount(const int accNum, const double balance, const double interestRate) 
																: Account(accNum, balance), interestRate(interestRate) {}
										
	void displayBalance() const override {
		Account::displayBalance();
		cout << "Interest Rate: " << interestRate << endl << endl;
	}

	void withdraw(double amount) override {
		if (amount > this->balance) 
			cout << "Error: the withdrawal amount exceeds the balance.\n";
		else if (amount < 0)
			cout << "Error: the withdrawal amount must be greater than 0.\n";
		else
			this->balance -= amount;
	}     
};


class CheckingAccount : public Account {
  public:
		CheckingAccount(const int accNum, const double balance) : Account(accNum, balance) {}
										
	void displayBalance() const override {
		Account::displayBalance();
		cout << "It's a checking account\n" << endl;
	}

	void withdraw(double amount) override {
		if (amount > this->balance) 
			cout << "Error: the withdrawal amount exceeds the balance.\n";
		else if (amount < 0)
			cout << "Error: the withdrawal amount must be greater than 0.\n";
		else
			this->balance -= amount;
	}     
};



int main() {
	Account* saveAcc = new SavingsAccount(1001, 1000.0, 3.0); // Account Number, Initial Balance, Interest Rate
	Account* checkAcc = new CheckingAccount(2001, 2000.0); // Account Number, Initial Balance

	saveAcc->deposit(500);
	checkAcc->deposit(500);

	saveAcc->withdraw(1000);
	checkAcc->withdraw(1000);

	saveAcc->displayBalance();
	checkAcc->displayBalance();

	delete saveAcc;
	delete checkAcc;

  return 0;
}
