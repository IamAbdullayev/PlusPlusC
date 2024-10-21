#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n, m;
	cin >> n >> m;
	
	int matrix[n][m];
	for (int i = 0; i < n; ++i) {			// Swap Rows with Extreme Values
		for (int j = 0; j < m; ++j) {
			cin >> matrix[i][j];
		}
	}
  
	int minElementMatrix = matrix[0][0];
	int maxElementMatrix = matrix[0][0];
	int maxRow(0);
	int minRow(0);


	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if(minElementMatrix > matrix[i][j]) {
				minElementMatrix = matrix[i][j];
				minRow = i;
			}

			if(maxElementMatrix < matrix[i][j]) {
				maxElementMatrix = matrix[i][j];
				maxRow = i;
			}
		}
	}

	for (int i = 0; i < m; ++i) {
		int temp = matrix[maxRow][i];
		matrix[maxRow][i] = matrix[minRow][i];
		matrix[minRow][i] = temp;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout <<	matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

}

