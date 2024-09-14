#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int length;
	cin >> length;

	int sequence[length];
	for(int i = 0; i < length; ++i) {
		cin >> sequence[i];
	}

	int K;
	cin >> K;


	if(1 <= K && K <= length) {

		for(int i = 0; i < length; ++i) {

			if(K + i <= ((length + K) / 2)) {
				int temp = sequence [K - 1 + i];
				sequence[K - 1 + i] = sequence[length - 1 - i];			// Reverse Array Elements from K to N

				sequence[length - 1 - i] = temp;
			}

			cout << sequence[i] << " ";

		}

	} else {

		cout << "1 <= K <= " << length << endl;

	}
	
	cout << endl;

	return 0;

}