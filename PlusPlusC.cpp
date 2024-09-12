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


	bool marker = true;

	for(int i = 0; i < length; ++i) {
		if(sequence[i] != sequence[(length - 1) - i]) {			// Check Symmetry of Array Elements
			marker = false;
			break;
		}
	}

	if (marker) {
		cout << "Symmetrical" << endl;
	} else {
		cout << "Not Symmetrical" << endl;
	}


	return 0;
}