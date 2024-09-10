#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int size;
	cin >> size;
	
	int sequence[size];
	for(int i = 0; i < size; ++i) {
		cin >> sequence[i];
	}


	int numberOfZero = 1;
	int maxZeroSequence = numberOfZero;
	
	for(int i = 1; i < size; ++i) {

		if(sequence[i] == 0 && sequence[i - 1] == 0) {			// Maximum Length of Consecutive Zeros
			numberOfZero++;
		}
		if(maxZeroSequence < numberOfZero) {
			maxZeroSequence = numberOfZero;
		}
		if(sequence[i] != 0) {
			numberOfZero = 1;
		}

	}



	cout << "Length of Maximum Consecutive Zeros: " << maxZeroSequence << endl;

	return 0;

}