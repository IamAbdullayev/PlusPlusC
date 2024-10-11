#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	double length, width;				// Rectangle Area and Perimeter Calculate
	cin >> length;
	cin >> width;

	cout << "The area of the rectangle is: " << areaCalc(length, width) << endl;
	cout << "The perimeter of the rectangle is: " << perimetrCalc(length, width) << endl;
	return 0;
}