#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;
	int number;
	cin >> number;					// Number Conversion Functions

	cout << "Bin: " << convertToBinary(number) << endl;
	cout << "Hex: " << convertToHex(number) << endl;
	cout << "Oct: " << convertToOctal(number) << endl;

	return 0;
}