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
	
	int difference = sequence[1] - sequence[0];
	bool isArithmetic = true;
	
	for(int i = 2; i < size; ++i) {
		int currentDifference = sequence[i] - sequence[i - 1];                              // Arithmetic Progression Checker
		if(difference != currentDifference) {
			isArithmetic = false;
			break;
		}
	}
	
	if(isArithmetic) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	
	return 0;
}