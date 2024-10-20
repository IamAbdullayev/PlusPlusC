#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n, m;
	cin >> n >> m;
	
	int matrix[n][m];
	for (int i = 0; i < n; ++i) {			// Minimum Column Values to Array
		for (int j = 0; j < m; ++j) {
			cin >> matrix[i][j];
		}
	}
    
	int minColumnElementMatrix[m];

	for (int i = 0; i < m; ++i) {
		minColumnElementMatrix[i] = matrix[0][i];
		for (int j = 1; j < n; ++j) {
			if(minColumnElementMatrix[i] > matrix[j][i]) minColumnElementMatrix[i] = matrix[j][i];
		}
	}
	
	for (int i = 0; i < m; ++i) {
		cout << minColumnElementMatrix[i] << " ";
	}
	cout << endl;
}

