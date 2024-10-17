#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;
	int number;
	cin >> number;					// 2# Number Conversion Function
	cin.ignore();
	
	string format;
	getline(cin, format);

	cout << convertTo(number, format) << endl;

	return 0;
}