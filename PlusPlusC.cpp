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

	int min(sequence[0]), 
			max(sequence[0]);

	for(int i = 0; i < size; ++i) {				// Sequence Minimum and Maximum Value Finder
		if(sequence[i] > max) {
			max = sequence[i];
		}
		if(sequence[i] < min) {
			min = sequence[i];
		}
	}

	cout << "minimum = " << min << ", " << "maximum = " << max << endl;

	return 0;

}