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
		for(size_t j = i; j < strlen(text); ++j) {
			if(text[i] > text[j]) {
				text[i] = text[i] + text[j];
				text[j] = text[i] - text[j];
				text[i] = text[i] - text[j];
			}
		}
		if(isalpha(text[i])) {
			cout << text[i];
		}
	}


  return 0;
}