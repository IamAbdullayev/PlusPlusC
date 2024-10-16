#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int number, length;
	cin >> number;
	length = findNumberLength(number);				// Armstrong and Perfect Number Checker


	if(isArmstrong(number, length)) {
		cout << "The " << number << " is an Armstrong number." << endl;
	} else {
		cout << "The " << number << " is not an Armstrong number." << endl;
	}

	if(isPerfect(number, length)) {
		cout << "The " << number << " is a Perfect number." << endl;
	} else {
		cout << "The " << number << " is not a Perfect number." << endl;
	}

	return 0;
}