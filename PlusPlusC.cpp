#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	// system("cls");

	char text[1000];
	cin.getline(text, sizeof(text));


	int counter(0);

	for(size_t i = 0; i < strlen(text); ++i) {				// Count Vowels in a String

		if(text[i] == 'a' || text[i] == 'e' || text[i] == 'o' || text[i] == 'u' || text[i] == 'i') {
			counter++;
		}

	}

	cout << "number of vowels -> " << counter << endl;


  return 0;
}