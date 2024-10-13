#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	double centimeters;				// Centimeter to Meter and Kilometer Converter
	cin >> centimeters;

	cout << "The distance in meter is: " << toMeters(centimeters) << endl;
	cout << "The distance in kilometer is: " << toKM(centimeters) << endl;
	return 0;
}