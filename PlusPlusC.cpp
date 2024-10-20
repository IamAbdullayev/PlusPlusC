#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n, m;
	cin >> n >> m;
	
	int matrix[n][m];
	for (int i = 0; i < n; ++i) {			// Column Sum to Array
		for (int j = 0; j < m; ++j) {
			cin >> matrix[i][j];
		}
	}
    
	int sumColumnElementsMatrix[m];

	for (int i = 0; i < m; ++i) {
		int sum = 0;
		for (int j = 0; j < n; ++j) {
			sum += matrix[j][i];
		}
		sumColumnElementsMatrix[i] = sum;
	}
	
	for (int i = 0; i < m; ++i) {
		cout << sumColumnElementsMatrix[i] << " ";
	}
	cout << endl;
}

