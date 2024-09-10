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
	
	
	int subSequence[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int number = 0;
	int counter = 0;

	for(int i = 0; i < size; ++i) {
		if(size >= 10) {
			if(sequence[i] == subSequence[counter]) {				// Count Occurrences of Subsequence
				counter++;
				number++;
				if(counter == 10) {
					counter = 0;
				}
			} else {
				counter = 0;
			}
		}  
	}
	
	cout << "Occurrences of Subsequence: " << (number / 10) << endl;

	return 0;

}