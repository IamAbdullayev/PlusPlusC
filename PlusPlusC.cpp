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

	for(int i = 0; i < size; ++i) {
		if(((i + 2) % 2 == 0) && (sequence[i] % 2 == 0)) {  	  // Even Numbers in Even Places Counter
			counter++;
		}
	}

	cout << counter << endl;


	return 0;

}