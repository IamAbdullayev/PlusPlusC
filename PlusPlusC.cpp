#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	// system("cls");
	// cout << boolalpha;

	string str_1, str_2, max_sstr("");
	getline(cin, str_1);
	getline(cin, str_2);

	int len_1 = str_1.length();
	int len_2 = str_2.length();

	for(int i = 0; i < len_1; ++i) {
		string current_sstr = "";
		for(int j = 0; j < len_2; ++j) {		// 3# Longest Common Substring
			if(str_1[i] == str_2[j]) {
				current_sstr += str_1[i];
				i++;
			}
		}
		if(current_sstr.length() > max_sstr.length()) {
			max_sstr = current_sstr;
		}
	}

	cout << "Longest Common Substring: " << max_sstr << endl;
	return 0;
}