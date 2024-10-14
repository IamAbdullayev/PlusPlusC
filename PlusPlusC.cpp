#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int number;				// Even-Odd Checker
	cin >> number;

	if(isEven(number)) {
		cout << "The entered number is even" << endl;
	} else {
		cout << "The entered number is odd" << endl;
	}

	
	return 0;
}