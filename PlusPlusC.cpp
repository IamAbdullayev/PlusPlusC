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
	
	
	int counter = 0;
	int maxPortion = 0;
	
	for(int i = 1; i < size; ++i) {				// Length of Largest Ascending Portion
			
		if(sequence[i - 1] < sequence[i]) {
			counter++;
		} else {
			if(maxPortion < counter) {
				maxPortion = counter;
			}
			counter = 0;
		}
			
	}

	if(maxPortion < counter) {
		maxPortion = counter;
	}
	
	cout << "Length of Largest Ascending Portion: " << maxPortion << endl;

	
	return 0;

}