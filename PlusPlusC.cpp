#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	int length = 100;

	char source[length], destination[length];
	cin.getline(source, sizeof(source));

	char* ptrSource = source;
	char* ptrDestination = destination;
	int counter = 0;

	for(size_t i = 0; *(ptrSource + i) != 0; ++i) {			// 2# String Copy using Pointer
		ptrDestination[i] = ptrSource[i];
		counter++;
	}
	ptrDestination[counter] = 0;

	cout << "Copied string: " << ptrDestination << endl;


	return 0;
}