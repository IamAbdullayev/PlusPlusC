#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>

using namespace std;

void toBinary(int number) {
	int i = 0;
	int bin[32];
	while(number != 0) {
		if(number % 2 == 0) {
			bin[i++] = 0;
		} else{
			bin[i++] = 1;
		}

		number /= 2;
	}

	for (int j = i - 1; j >= 0; --j) {
		cout << bin[j];
	}
}