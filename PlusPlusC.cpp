#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int length;
	cin >> length;

	if(1 <= length && length <= 100) {
		int sequence[length];
		for(int i = 0; i < length; ++i) {
			cin >> sequence[i];
		}


		int lastElement = sequence[length - 1];				// 2# Cyclically Shift Array Elements to the Right
		for(int i = length - 1; i > 0; --i) {	

			sequence[i] = sequence[i - 1];

		}
		sequence[0] = lastElement;


		for (int i = 0; i < length; i++) {
			cout << sequence[i] << " ";
		}
		cout << endl;


	} else {
		cout << "length = " << length <<"; 1 <= length <= 100;";
	}


	return 0;
}