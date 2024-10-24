#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;

void rotate90(int n, int matrix[100][100]) {
	for (int i = 0; i < n; ++i) {		
		for (int j = i; j < n; ++j) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n / 2; ++j) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[i][(n - 1) - j];
			matrix[i][(n - 1) - j] = temp;
		}
	}
}


void printMatrix (int n, int matrix[100][100]) {
	for (int i = 0; i < n; ++i) {	
		for (int j = 0; j < n; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}