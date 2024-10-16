#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>

using namespace std;

int findMaxElement(int number[], int length) {

	int maxElement = number[0];

	for(int i = 1; i < length; ++i) {

		if(maxElement < number[i]) {
			maxElement = number[i];
		}

	}

	return maxElement;
}