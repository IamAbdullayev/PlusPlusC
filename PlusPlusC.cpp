#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	string word_1, word_2;				// Anagram Checker
	getline(cin, word_1);
	getline(cin, word_2);


	if(isAnagram(word_1, word_2)) {
		cout << "Anagram" << endl;
	} else {
		cout << "Not Anagram" << endl;
	}

	return 0;
}