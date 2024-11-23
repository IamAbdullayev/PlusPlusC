#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;

int fact(int n) {
	if (1 == n || 0 == n) return 1;

	return n * fact(n - 1);
}

int greatestCommonDivisor(int a, int b) {
	// if (0 == b || 0 == a) return a + b;
	// if (a > b) return greatestCommonDivisor((a % b), b);
	// return greatestCommonDivisor(a, (a % b));

	if (0 == b) return a;
	return greatestCommonDivisor(b, (a % b));
}

double fast_power(double a, int n) {
	// if (0 == n) return 1;
	// if ((n % 2) == 0) {
	// 	n = n / 2;
	// 	a *= a;
	// }
	// return a * fast_power(a, n - 1);


	if (0 == n) return 1;

	if (n % 2 == 0)
		return fast_power((a * a), (n / 2));
	else
		return a * fast_power(a, n - 1);
}

int fibonacci(int n) {
	if (n <= 1) return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}



int main() {
	fact(5);

	int factorial;
	factorial = fact(5);

	int gcd;
	gcd = greatestCommonDivisor(72, 36);

	double exp;
	exp = fast_power(2, 16);

	int fib;
	fib = fibonacci(10);

	cout << "The factorial: " << factorial << endl;
	cout << "The greatest common divisor: " << gcd << endl;
	cout << "The exponentiation: " << exp << endl;
	cout << "The fibonacci: " << fib << endl;

	return 0;
}
