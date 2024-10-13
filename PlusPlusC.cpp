#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	char character[10];				// Character Code (ASCII/Unicode) Printer
	cin.getline(character, sizeof(character));

	cout << "The ASCII value of " << character << " is: " << indexChar(character) << endl;
	cout << "The character for the ASCII value " << indexChar(character) << " is: " << character << endl;
	return 0;
}