#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n = 5;
	int m = 6;
	int matrix[n][m];			// Fill 5x6 Array in a Specific Pattern

	int k = 1;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			matrix[i][j] = k++;
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

