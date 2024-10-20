#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	// int num1, num2;					// template <typename T> T minimum(T a, T b)
	// cin >> num1 >> num2;
	// float numf1, numf2;
	// cin >> numf1 >> numf2;
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);

	cout << minimum(str1, str2);

	return 0;
}
