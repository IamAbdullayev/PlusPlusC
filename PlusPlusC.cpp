#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n;
	cin >> n;

	int matrix[n][n];
	for (int i = 0; i < n; ++i) {			// Mirror Matrix Horizontally
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n/2; ++i) {		
		for (int j = 0; j < n; ++j) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[(n - 1) - i][j];
			matrix[(n - 1) - i][j] = temp;
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

