#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	// system("cls");

	char text[1000];
	cin.getline(text, sizeof(text));


	for(int i = 0; i < strlen(text); ++i) {			 
		if(isalpha(text[i]) && text[i] != 'Z' && text[i] != 'z') {		// Shift Letters in a String
			text[i] += 1;
		} else if(text[i] == 'Z') {
			text[i] = 'A';
		}	else if(text[i] == 'z') {
			text[i] = 'a';
		}
	}

	cout << text << endl;


  return 0;
}