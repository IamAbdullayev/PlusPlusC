#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;


int main() {
	int n;
	cin >> n;
	
	int n_copy = n;
	int dig;
	int max = 0;
	int count = 0;

	// Find the maximum number
	while (n_copy) {    
		dig = n_copy % 10;
		if (dig > max) max = dig;
		n_copy /= 10;
	}

	// Find how many times the maximum digit is repeated
	while (n) {					
		dig = n % 10;
		if (dig == max) count++;
		n /= 10;
	}

	// Print the maximum digit
	cout << count << endl;
	return 0;
}
 