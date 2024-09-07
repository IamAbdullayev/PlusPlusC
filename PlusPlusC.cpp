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

	int min(sequence[0]);
	int max(sequence[0]);
	int maxIndex = 0;
	int minIndex = 0;

	for(int i = 0; i < size; ++i) {				// Swap Maximum and Minimum Elements
		if(sequence[i] > max) {
			max = sequence[i];
			maxIndex = i;
		}
		if(sequence[i] < min) {
			min = sequence[i];
			minIndex = i;
		}
	}
	sequence[maxIndex] = min;
	sequence[minIndex] = max;

	for(int i = 0; i < size; ++i) {
		cout << sequence[i] << " ";
	}


	return 0;

}