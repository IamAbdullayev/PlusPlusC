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
	
	float ratio = (float)sequence[1] / (float)sequence[0];
	// cout << ratio << endl;
	bool isGeometric = true;
	
	for(int i = 2; i < size; ++i) {
		float currentRatio = (float)sequence[i] / (float)sequence[i - 1];                    // Geometric Progression Checker
		// cout << currentRatio << endl;
		if(currentRatio != ratio) {
			isGeometric = false;
			break;
		}
	}
	
	if(isGeometric) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	
	return 0;

}