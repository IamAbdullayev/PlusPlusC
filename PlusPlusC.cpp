#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	// system("cls");

	char text[1000];
	cin.getline(text, sizeof(text));


	bool trueOrFalse(true);
	int len = strlen(text);

	for(int i = 0; i < len / 2; ++i) {				// Check Palindrome

		if(text[i] != text[(len - 1) - i]) {
			trueOrFalse = false;
		}

	}

	// cout << boolalpha;
	// cout << trueOrFalse << endl; // true  :)

	if(trueOrFalse == 1) {
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}

  return 0;
}