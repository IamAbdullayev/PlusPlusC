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
			for(int j = 0; j < length - 1; ++j) { 
				
				if(sequence[j] < 0 && sequence[j + 1] > 0) {			// Group Positive and Negative Elements in Array
					int temp = sequence[j];
					sequence[j] = sequence[j + 1];
					sequence[j + 1] = temp;
				}

			}

		}
		
		for(int i = 0; i < length; ++i) {
			cout << sequence[i] << " ";
		}
		cout << endl;

	} else {

		cout << "length = " << length <<"; 1 <= length <= 100;";

	}


	return 0;
}