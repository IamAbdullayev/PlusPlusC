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
	
	bool isAscending = true;
	bool isDescending = true;
	
	for(int i = 1; i < size; ++i) {
		if(sequence[i] > sequence[i - 1]) {
			isDescending = false;
		} else if(sequence[i] < sequence[i - 1]) {				// Sequence Order Checker
			isAscending = false;
		}
	}
	
	if(isAscending) {
		cout << "Ascending" << endl;
	} else if(isDescending) {
		cout << "Descending" << endl;
	} else {
		cout << "Neither" << endl;
	}
	
	return 0;

}