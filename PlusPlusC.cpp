#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n, m;
	cin >> n >> m;
	
	int matrix[n][m];
	for (int i = 0; i < n; ++i) {			// Column Value Differences to Array
		for (int j = 0; j < m; ++j) {
			cin >> matrix[i][j];
		}
	}
  
	int columnsElementsDifference[m];
	int minColumnElementMatrix;
	int maxColumnElementMatrix;

	for (int i = 0; i < m; ++i) {
		minColumnElementMatrix = matrix[0][i];
		maxColumnElementMatrix = matrix[0][i];
		for (int j = 1; j < n; ++j) {
			if(minColumnElementMatrix > matrix[j][i]) minColumnElementMatrix = matrix[j][i];
			if(maxColumnElementMatrix < matrix[j][i]) maxColumnElementMatrix = matrix[j][i];
		}
		columnsElementsDifference[i] = maxColumnElementMatrix - minColumnElementMatrix;
	}
	
	for (int i = 0; i < m; ++i) {
		cout << columnsElementsDifference[i] << " ";
	}
	cout << endl;
}

