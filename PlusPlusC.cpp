#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	int length = 100;

	char str1[length];
	char str2[length];

	cin.getline(str1, length);
	cin.getline(str2, length);				// Concatenate Strings using Pointer

	char* s1 = str1;
	char* s2 = str2;

	int len1 = strlen(str1);
	int len2 = strlen(str2);

	for(int i = 0; i < len2; ++i) {
		s1[len1 + i] = s2[i];
	}
	s1[len1 + len2] = 0;

	cout << "Concatenated string: " << s1 << endl;


	return 0;
}