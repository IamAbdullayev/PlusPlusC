#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int length;
	cin >> length;

	if(1 <= length && length <= 100) {
		int sequence[length];
		float cloneSequence[length];
		for(int i = 0; i < length; ++i) {
			cin >> sequence[i];
			cloneSequence[i] = sequence[i];
		}

		for(int i = 0; i < length; ++i) {
			if(i != 0 && i != length - 1) {
				cloneSequence[i] = (float)(sequence[i - 1] + sequence[i + 1]) / 2;		// Replace Array Elements with Half the Sum of Neighbors
			}

			cout << cloneSequence[i] << " ";
		}

		cout << endl;

	} else {
		cout << "length = " << length <<"; 1 <= length <= 100;";
	}


	return 0;
}