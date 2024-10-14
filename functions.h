#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>

using namespace std;

int numberFactorial(int number) {
	int factorial = 1;
	for(int i = 0; i < number; ++i) {
		factorial *= (number - i);
	}

	return factorial / number;
}

int sumFactorial(int number) {
	int sum = 0;
	for(int i = 1; i <= number; ++i) {
		sum += numberFactorial(i);
	}

	return sum;
}