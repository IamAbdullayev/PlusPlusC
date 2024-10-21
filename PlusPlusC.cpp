#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n = 5;
	int m = 6;
	int matrix[n][m];

	int k = 1;

	for (int i = 0; i < n; ++i) {			// Fill 5x6 Matrix in a Specific Pattern
		if (i == 0 || i % 2 == 0) {
			for (int j = 0; j < m; ++j) {
				matrix[i][j] = k++;
			}
		} else {
			for (int j = m - 1; 0 <= j; --j) {
				matrix[i][j] = k++;
			}
		}
	}


	for (int i = 0; i < n; ++i) {	
		for (int j = 0; j < m; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}

