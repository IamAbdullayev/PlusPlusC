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

			if(i <= (K / 2) - 1) {
				int temp = sequence [i];
				sequence[i] = sequence[K - 1 - i];			// Reverse Array Elements up to K

				sequence[K - 1 - i] = temp;
			}

			cout << sequence[i] << " ";

		}

	} else {

		cout << "1 <= K <= " << length << endl;

	}
	
	cout << endl;

	return 0;

}