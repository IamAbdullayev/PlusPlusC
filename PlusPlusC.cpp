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

	int countLocalMax = 0;
	int countLocalMin = 0;

	for(int i = 1; i < size - 1; ++i) {
		if(sequence[i] > sequence[i - 1] && sequence[i] > sequence[i + 1]) {						// Count Local Minima and Maxima
			countLocalMax++;
		}
		if(sequence[i] < sequence[i - 1] && sequence[i] < sequence[i + 1]) {
			countLocalMin++;
		}
	}

	cout << "Local Minima: " << countLocalMin << endl << "Local Maxima: " << countLocalMax << endl;


	return 0;

}