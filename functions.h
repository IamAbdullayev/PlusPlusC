#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>

using namespace std;

int findNumberLength(int num) {
	int length = 1;
	for(; num /= 10; ++length);
	return length;
}

bool isArmstrong(int num, int numLength) {
	int temp = num;
	int dig = temp % 10;
	int armstrong = pow(dig, numLength);

	for(int i = 1; i < numLength; ++i) {
		temp /= 10;
		dig = temp % 10;
		armstrong += pow(dig, numLength);
	}

	if(armstrong == num) {
		return true;
	}	else {
		return false;
	}
}

bool isPerfect(int num, int numLength) {
	int sumDividers = 0;

	for(int i = 1; i < num; ++i) {
		if(num % i == 0) sumDividers += i;
	}


	if(sumDividers == num) {
		return true;
	}	else {
		return false;
	}
}