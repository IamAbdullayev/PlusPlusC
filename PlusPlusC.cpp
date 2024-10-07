#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

// void isLongSubstring(char* a, char* b) {

// }


int main() {
	// system("cls");
	// cout << boolalpha;

	char text1[1000];
	cin.getline(text1, sizeof(text1));
	char text2[1000];
	cin.getline(text2, sizeof(text2));


	int len1 = strlen(text1);
	int len2 = strlen(text2);

	int startID(0);
	int maxLen(0);

	for(int i = 0; i < len1; ++i) {				// 2# Longest Common Substring
		int currentLen(0);

		for(int j = 0; j < len2; ++j) {

			if(text1[i + currentLen] == text2[j]) {
				currentLen++;

				if(currentLen > maxLen) {
					maxLen = currentLen;
					startID = i;
				}
			
			} else {
				currentLen = 0;
			}

			if(i + currentLen >= len1) {
				break;
			}

		}

	}

	cout << "Longest Common Substring: ";
	for(int i = startID; i < startID + maxLen; ++i) {
		cout << text1[i];
	}

  return 0;
}