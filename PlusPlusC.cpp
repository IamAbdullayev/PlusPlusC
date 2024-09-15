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


		for(int i = 0; i < length; ++i) {
			for(int j = i; j < length; ++j) { 
				
				if(sequence[i] > sequence[j]) {			// Sort Array in Ascending Order
					int temp = sequence[i];
					sequence[i] = sequence[j];
					sequence[j] = temp;
				}

			}

			cout << sequence[i] << " ";
		}

	} else {

		cout << "length = " << length <<"; 1 <= length <= 100;";

	}


	return 0;
}