#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int m, n;
	cin >> m >> n;
	
	int matrix[m][n];
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}
	
	int uniqueElement[m * n];				// Count Unique Elements
	int uniqueCount = 0;
	bool isUnique;

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			isUnique = true;
			for (int k = 0; k < uniqueCount; ++k) {
				if (matrix[i][j] == uniqueElement[k]) {
					isUnique = false;
					break;
				}
			}

			if (isUnique) {
				uniqueElement[uniqueCount++] = matrix[i][j];
			}
		}
	}

	cout << uniqueCount << endl;
}

