#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>

using namespace std;

bool isPrime(int number) {
	int counter = 0;
	for(int i = 1; i <= number; ++i) {
		if(number % i == 0) {
			counter++;
		}
	} 

	if (counter > 2) {
		return false;
	} else {
		return true;
	}
}