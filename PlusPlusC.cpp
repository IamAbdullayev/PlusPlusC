#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n;
	cin >> n;

	int matrix[100][100];
	for (int i = 0; i < n; ++i) {			// Rotate Matrix in Positive Directions
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}

	rotate90(n, matrix);
	cout << "90 degrees: " << endl;
	printMatrix(n, matrix);

	rotate90(n, matrix);
	cout << "180 degrees: " << endl;
	printMatrix(n, matrix);

	rotate90(n, matrix);
	cout << "270 degrees: " << endl;
	printMatrix(n, matrix);

	return 0;
}

