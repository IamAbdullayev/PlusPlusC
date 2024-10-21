#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n;
	cin >> n;

	int matrix[n][n];
	for (int i = 0; i < n; ++i) {			// Mirror Matrix along Secondary Diagonal
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {		
		for (int j = 0; j < (n - 1) - i; ++j) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[n - j - 1][(n - i) - 1];
			matrix[(n - j) - 1][(n - i) - 1] = temp;
		}
	}

	for (int i = 0; i < n; ++i) {	
		for (int j = 0; j < n; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}

