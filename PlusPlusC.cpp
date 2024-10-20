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

	int maxNum = matrix[0][0];			// Maximum Modulo Element
	int a = 0;
	int b = 0;

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (matrix[i][j] > maxNum && (i + j) > 0) {
				if (matrix[i][j] % (i + j) == 0) {
					maxNum = matrix[i][j];
					a = i;
					b = j;
				}
			}
		}
	}

	cout << "Value: " << maxNum << " " << a << " " << b << endl;

	return 0;
}
