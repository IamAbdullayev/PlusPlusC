#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;


int main() {
	int number;
	cin >> number;
	int digit;   
	int max = 0;
	int count = 0;   

	// Find the maximum number and find how many times the maximum digit is repeated
	while (number > 0) { 
		digit = number % 10;
		if (digit > max) {            
			max = digit;  
			count = 1; 
		} else if (max == digit) { 
			count++; 
		}
		number /= 10;
	}

	// Print the maximum digit
	cout << count << endl;

	return 0;
}
 