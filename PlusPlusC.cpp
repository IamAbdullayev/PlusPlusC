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
	
	int numberDistinctElements = size;
	
	for(int i = 1; i < size; ++i) {
			
		if(sequence[i-1] != sequence[i]) {
				
			for(int j = i; j < size; ++j) {
					
				if(sequence[i-1] == sequence[j]) {			// Count Distinct Elements in Unordered Sequence
					numberDistinctElements--;
					break;
				}
					
			}
				
		} else {
			numberDistinctElements--;
		}
			
	}
	
	
	
	cout << "Distinct Elements: " << numberDistinctElements << endl;
	
	return 0;

}