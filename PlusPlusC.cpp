#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n;
	cin >> n;
	
	int matrix[n][n];
	for (int i = 0; i < n; ++i) {			// Monotonic Sequences in Rows
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}
  
	int countIncreasElement;
	int countDecreasElement;

	for (int i = 0; i < n; ++i) {
		countIncreasElement = 0;
		countDecreasElement = 0;
		for (int j = 0; j < (n - 1); ++j) {
			if(matrix[i][j] < matrix[i][j+1]) {
				countIncreasElement++;
			}
			if(matrix[i][j] > matrix[i][j+1]) {
				countDecreasElement++;
			}
		}
		
		if (countIncreasElement == (n - 1) || countDecreasElement == (n - 1)) {
			cout << i + 1 << " ";
		}
	}
	cout << endl;
}

