#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	char text[100];
	cin.getline(text, sizeof(text));

	char* p_text = text;
	int counter = 0;

	for(size_t i = 0; i < sizeof(text); ++i) {			// String Length using Pointer
		if(*(p_text + i) != 0) {
			counter++;
		} else {
			break;
		}
	}

	cout << "Length of the string: " << counter << endl;


	return 0;
}