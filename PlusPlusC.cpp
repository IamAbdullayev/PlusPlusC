#include "functions.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	int length;
	cin >> length;
	int arr[length];
	for(int i = 0; i < length; ++i) {			// Largest Element Finder
		cin >> arr[i];
	}

	cout << findMaxElement(arr, length) << endl;

	return 0;
}