#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n;
	cin >> n;
	
	int matrix[n][n];
	for (int i = 0; i < n; ++i) {			// Swap Rows and Columns
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}
    
	int newMatrix[n][n];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			newMatrix[j][i] = matrix[i][j];
		}
	}
	
	for (int i = 0; i < n; ++i) {			// Swap Rows and Columns
		for (int j = 0; j < n; ++j) {
			cout << newMatrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

