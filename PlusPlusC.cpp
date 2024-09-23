#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50};

	int* ptrArr = arr;

	for(int i = (sizeof(arr) / sizeof(arr[0])) - 1; i >= 0; --i) {		// Reverse Array using Pointer
		cout << *(ptrArr + i) << endl;
	}


	return 0;
}