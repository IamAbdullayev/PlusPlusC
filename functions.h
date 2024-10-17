#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>

using namespace std;

void isPerfect(int start, int end) {
	cout << "The perfect numbers between " << start << " to " << end << " are: ";

	for(int i = start; i < end; ++i) {
		int sumDividers = 0;

		for(int j = 1; j < i; ++j) {
			if(i % j == 0) sumDividers += j;
		}

		if(sumDividers == i) {
			 cout << i << " ";
		}
	}

	cout << endl;
}