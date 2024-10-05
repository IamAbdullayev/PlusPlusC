#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	// system("cls");

	char text1[1000];
	char text2[1000];
	cin.getline(text1, sizeof(text1));
	cin.getline(text2, sizeof(text2));


	int len1 = strlen(text1);
	int len2 = strlen(text2);
	bool trueOrFalse = false;

	for(int i = 0; i < len2; ++i) {				// Verify Letter Existence

		for(int j = 0; j < len1; ++j) {

			if(text2[i] == text1[j]) {

				trueOrFalse = true;
				break;

			} else {

				trueOrFalse = false;

			}

		}

	}

	cout << boolalpha;
	cout << trueOrFalse << endl;

  return 0;
}