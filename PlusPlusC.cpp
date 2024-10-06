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
	char* cpyText = new char;

	int counter(1);
	int k(0);

	for(int i = 0; i < len; ++i) {				// 2# String Compression

		if(i + 1 < len && text[i] == text[i + 1]) {
			counter++;
		} else {
			cpyText[k++] = text[i];
			
			k += sprintf(cpyText + k, "%d", counter);

			counter = 1;
		}
	}


	cpyText[k] = '\0';
	cout << cpyText << endl;

	delete []cpyText;

  return 0;
}