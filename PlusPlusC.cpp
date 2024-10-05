#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	// system("cls");
	// cout << boolalpha;

	char text[1000];
	cin.getline(text, sizeof(text));


	int len = strlen(text);
	char *cpyText = new char[sizeof(text) + 1];
	int j = 0;

	for(int i = 0; i < len; ++i) {				// Insert Dash Between Odds

		cpyText[j++] = text[i];

		if((text[i] % 2 != 0 && text[i+1] % 2 != 0) && (text[i] != text[i + 1])) {
			
			cpyText[j++] = '-';

		}

	}

	cpyText[j] = '\0';

	cout << cpyText << endl;

	delete []cpyText;

  return 0;
}