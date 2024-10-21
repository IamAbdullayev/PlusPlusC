#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n;
	cin >> n;
	
	int matrix[n][n];
	for (int i = 0; i < n; ++i) {			// Columns with Symmetrical Sequences
		for (int j = 0; j < n; ++j) {
			cin >> matrix[i][j];
		}
	}
  
	bool isPalindrome;

	for (int i = 0; i < n; ++i) {
		isPalindrome = true;
		for (int j = n; j > n/2; --j) {
			if(matrix[j - 1][i] != matrix[n - j][i]) {
				isPalindrome = false;
				break;
			}
		}
		
		if (isPalindrome) {
			cout << i + 1 << " ";
		}
	}
	cout << endl;
}

