#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n, m;
	cin >> n >> m;
	
	int matrix[n][m];
	for (int i = 0; i < n; ++i) {			// Minimum Row Values to Array
		for (int j = 0; j < m; ++j) {
			cin >> matrix[i][j];
		}
	}
    
	int minRowElementMatrix[n];

	for (int i = 0; i < n; ++i) {
		minRowElementMatrix[i] = matrix[i][0];
		for (int j = 1; j < m; ++j) {
			if(minRowElementMatrix[i] > matrix[i][j]) minRowElementMatrix[i] = matrix[i][j];
		}
	}
	
	for (int i = 0; i < n; ++i) {
		cout << minRowElementMatrix[i] << " ";
	}
	cout << endl;
}

