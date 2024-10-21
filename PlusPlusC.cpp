#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n = 5;
	int m = 6;
	int matrix[n][m];			// 3# Fill 5x6 Array in a Specific Pattern

	int k = 1;

	for (int diagonals = 0; diagonals < (n + m - 1); ++diagonals) {
		if (diagonals % 2 == 0) {
			for (int i = 0; i <= diagonals; ++i) {
				int j = diagonals - i;
				if (i < n && j < m) {
					matrix[i][j] = k++;
				}
			}
		} else {
			for (int i = 0; i <= diagonals; ++i) {
				int j = diagonals - i;
				if (j < n && i < m) {
					matrix[j][i] = k++;
				}
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

