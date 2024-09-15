#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int length;
	cin >> length;

	int sequence[length];
	for(int i = 0; i < length; ++i) {
		cin >> sequence[i];
	}


	if(1 <= length && length <= 100) {

		for(int i = length - 1; i > 0; --i) {				// Cyclically Shift Array Elements to the Right

			int temp = sequence[i];
			sequence[i] = sequence[i - 1];
			sequence[i - 1] = temp;

		}
		
	} else {

		cout << "length = " << length <<"; 1 <= length <= 100;";

	}

	for (int i = 0; i < length; i++) {
		cout << sequence[i] << " ";
	}
	cout << endl;


	return 0;

}