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
	
	int number;
	cin >> number;
	
	int numberIndex = 0;
	
	for(int i = 0; i < size; ++i) {                    // Last Occurrence Index Finder
			
		if(sequence[i] == number) {
			numberIndex = i;
		}
			
	}
	
	if(numberIndex == 0) {
		cout << "Not Found" << endl;
	} else {
		cout << "Last Occurrence Index: " << numberIndex << endl;
	}

	
	return 0;

}