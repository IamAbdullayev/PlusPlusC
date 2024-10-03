#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	// system("cls");

	char text[1000];
	cin.getline(text, sizeof(text));

	if(isalpha(text[0]) && islower(text[0])) {
		text[0] = toupper(text[0]);
	}

	for(size_t i = 1; i < strlen(text); ++i) {			 // Capitalize Words in a String
		if(isalpha(text[i]) && isupper(text[i]) && isalpha(text[i - 1])) {
			text[i] = tolower(text[i]);
		} else if(!isalpha(text[i - 1])) {
			text[i] = toupper(text[i]);
		}
	}

	cout << text << endl;


  return 0;
}