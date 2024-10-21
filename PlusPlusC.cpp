#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n;
	cin >> n;
	
	int matrix[n][n];
	for (int i = 0; i < n; ++i) {			// Rows with All Zeros
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}
  
	bool isAllElementNull;

	for (int i = 0; i < n; ++i) {
		isAllElementNull = true;
		for (int j = 0; j < n; ++j) {
			if(0 != matrix[i][j]) {
				isAllElementNull = false;
				break;
			}
		}
		
		if (isAllElementNull) {
			cout << i + 1 << " ";
		}
	}
	cout << endl;
}

