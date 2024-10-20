#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n, m;
	cin >> n >> m;
	
	int matrix[n][m];
	for (int i = 0; i < n; ++i) {			// Row Sum to Array
		for (int j = 0; j < m; ++j) {
			cin >> matrix[i][j];
		}
	}
    
	int sumRowElementsMatrix[n];

	for (int i = 0; i < n; ++i) {
		int sum = 0;
		for (int j = 0; j < m; ++j) {
			sum += matrix[i][j];
		}
		sumRowElementsMatrix[i] = sum;
	}
	
	for (int i = 0; i < n; ++i) {
		cout << sumRowElementsMatrix[i] << " ";
	}
	cout << endl;
}

