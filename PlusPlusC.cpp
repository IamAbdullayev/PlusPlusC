#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n;
	cin >> n;
	
	int matrix[n][n];
	for (int i = 0; i < n; ++i) {				// Diagonal and Above Zeroing
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}
    

	for (int i = 0; i < n; ++i) {
		for (int j = i; j < n; ++j) {

			matrix[i][j] = 0;

		}
	}
	
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

