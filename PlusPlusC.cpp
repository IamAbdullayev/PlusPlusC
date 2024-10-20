#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n;
	cin >> n;
	
	int matrix[n][n];
	for (int i = 0; i < n; ++i) {			// Diagonal Sums
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}
    
	int sumMainDiagonal = 0;
	int sumSecondaryDiagonal = 0;

	for (int i = 0; i < n; ++i) {
		sumMainDiagonal += matrix[i][i];
		sumSecondaryDiagonal += matrix[i][(n - 1) - i];
	}
	
	cout << sumMainDiagonal << " " << sumSecondaryDiagonal << endl;
}

