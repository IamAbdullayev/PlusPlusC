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
	
	int numberDistinctElement = size;
	
	for(int i = 1; i < size; ++i) {
		if(sequence[i-1] == sequence[i]) {		// Count Distinct Elements in Non-decreasing Sequence
			numberDistinctElement--;
		}
	}
	
	cout << "Distinct Elements: " << numberDistinctElement << endl;
	
	
	return 0;

}