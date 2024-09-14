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

	int K, L;
	cin >> K;
	cin >> L;


	if((1 <= K && K <= length) && (K <= L && L <= length) && (1 <= length && length <= 100)) {

		for(int i = 0; i < length; ++i) {

			if(K + i <= ((L + K) / 2)) {
				int temp = sequence [K - 1 + i];
				sequence[K - 1 + i] = sequence[L - 1 - i];					// Reverse Array Elements from K to L
				sequence[L - 1 - i] = temp;
			}

			cout << sequence[i] << " ";

		}

	} else {

		cout << "1 <= length <= 100; " << endl << "1 <= K <= L <= " << length << endl;

	}
	
	cout << endl;

	return 0;

}