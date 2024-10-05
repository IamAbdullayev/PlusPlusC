#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	// system("cls");

	char text[1000];
	cin.getline(text, sizeof(text));


	for(size_t i = 0; i < strlen(text); ++i) {
		for(size_t j = strlen(text) - 1; j != 0; --j) { 			// 2# Sort Characters in a String
			if(text[j] < text[j - 1]) {
				text[j] = text[j] + text[j - 1];
				text[j - 1] = text[j] - text[j - 1];
				text[j] = text[j] - text[j - 1];
			}
		}
		if(isalpha(text[i])) {
			cout << text[i];
		}
	}


  return 0;
}