#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n, m;
	cin >> n >> m;

	int matrix[n][m];
	for (int i = 0; i < n; ++i) {			// Swap Columns in Integer Matrix
		for (int j = 0; j < m; ++j) {
			cin >> matrix[i][j];
		}
	}

	int i, j;
	cin >> i;
	cin >> j;
	if (!(1 <= i && i < j && j <= m)) return 0;

	for (int k = 0; k < n; ++k) {
		int temp = matrix[k][i - 1];
		matrix[k][i - 1] = matrix[k][j - 1];
		matrix[k][j - 1] = temp;
	}

	for (int i = 0; i < n; ++i) {	
		for (int j = 0; j < m; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}

