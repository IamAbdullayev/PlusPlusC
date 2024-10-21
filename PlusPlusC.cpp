#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n;
	cin >> n;
	
	int matrix[n][n];
	for (int i = 0; i < n; ++i) {			// Rows with Equal Elements
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}
  
	bool isAllElementEqual;

	for (int i = 0; i < n; ++i) {
		isAllElementEqual = true;
		for (int j = 0; j < (n - 1); ++j) {
			if(matrix[i][j] != matrix[i][j+1]) {
				isAllElementEqual = false;
				break;
			}
		}
		
		if (isAllElementEqual) {
			cout << i + 1 << " ";
		}
	}
	cout << endl;
}

