#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int number;				// Prime Number Checker
	cin >> number;

	if(isPrime(number)) {
		cout << "The number " << number << " is a prime number" << endl;
	} else {
		cout << "The number " << number << " is not a prime number" << "\n";
	}

	return 0;
}