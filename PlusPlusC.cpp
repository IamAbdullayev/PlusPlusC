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

	int x;
	cin >> x;


	int arithmeticMean = 0;
	int max = sequence[0];
	int min = sequence[0];
	
	for(int i = 0; i < length; ++i) {
		arithmeticMean += sequence[i];
		if(max < sequence[i]) {
			max = sequence[i];
		} else if(min > sequence[i]) {
			min = sequence[i];
		}
	}

	arithmeticMean = arithmeticMean / length;

	cout << max << endl;
	cout << arithmeticMean << endl;
	cout << min << endl;
	cout << x << endl;

	if(min <= x && x < (arithmeticMean / 2)) {			// 87. Closest Value to Min, Max, and Mean
		cout << "Minimum" << endl;
	} else if((arithmeticMean / 2 + arithmeticMean) < x && x <= max) {
		cout << "Maximum" << endl;
	} else {
		cout << "Mean" << endl;
	}


	return 0;

}