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

	int max = sequence[0];
	int numberOfMax = 0;
	int firstIndexMax = 0;
	int lastIndexMax;
	
	for(int i = 1; i < size; ++i) {					// First and Last Maximum Elements Finder
		if(max < sequence[i]) {
			max = sequence[i];
			firstIndexMax = i;
		}

	}

	for(int i = 0; i < size; ++i) {
		if(max == sequence[i]) {
			lastIndexMax = i;
			numberOfMax++;
		}

	}

	cout << "The maximum element is: " << max << endl;
	cout << "The number of occurrences of the maximum element is: " << numberOfMax << endl;
	cout << "The position of the first maximum element is: " << firstIndexMax << endl;
	cout << "The position of the last maximum element is: " << lastIndexMax << endl;


	return 0;

}