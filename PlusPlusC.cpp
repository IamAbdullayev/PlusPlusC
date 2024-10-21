#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int n, m;
	cin >> n >> m;
	
	double matrix[n][m];
	for (int i = 0; i < n; ++i) {			// Average of Extreme Values
		for (int j = 0; j < m; ++j) {
			cin >> matrix[i][j];
		}
	}
  
	double minElementMatrix = matrix[0][0];
	double maxElementMatrix = matrix[0][0];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if(minElementMatrix > matrix[i][j]) minElementMatrix = matrix[i][j];
			if(maxElementMatrix < matrix[i][j]) maxElementMatrix = matrix[i][j];
		}
	}
	
    cout.setf(ios::fixed);
    cout.precision(2);
    cout <<    ((maxElementMatrix + minElementMatrix) / (double)2) << endl;
}

