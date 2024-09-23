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

	for(size_t i = 0; *(ptrSource + i) >= 0; ++i) {
		*(ptrDestination + i) = *(ptrSource + i);
	}
	
	cout << "Copied string: " << ptrDestination << endl;


	return 0;
}