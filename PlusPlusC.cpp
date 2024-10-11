#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	double a, b, c, d;				// Total and Average of Four Numbers
	cin >> a >> b;
	cin >> c >> d;

	cout << "The total of four numbers is: " << totalCalc(a, b, c, d) << endl;
	cout << "The average of four numbers is: " << averageCalc(a, b, c, d) << endl;
	return 0;
}