#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);

	int len = str.length();
	int counter = 0;
	int start = 0;
	int max = 0;
	string maxWord = "";


	for (int i = 0; i <= len; ++i) {
		if (isblank(str[i]) || i == len) {
			if (max < counter) {
				start = i - counter;
				max = counter;
			}
			counter = 0;
		} else {
			counter++;
		}
	}

	cout << start << endl;
	cout << max << endl;

	for (int i = start; i < (start + max); ++i) {
		// cout << str[i];
		maxWord += str[i];
	}
	cout << maxWord << endl;

}