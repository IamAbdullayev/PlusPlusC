#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	// system("cls");

	char text[1000];
	cin.getline(text, sizeof(text));

	int length(0);
	int indexStart(0);
	int indexMax(0);

	for(size_t i = indexStart; i < strlen(text); ++i) {			 // Largest Word in a String
		int counter(0);

		for(size_t j = indexStart; j < strlen(text) + 1; ++j) {
			if(!isalnum(text[j])) {
				indexStart = j+1;

				if(length < counter) {
					length = counter;
					indexMax = j - counter;
				}
				
				break;
			}
			
			counter++;
		}
	}

	for(size_t i = indexMax; isalnum(text[i]); ++i) {
		cout << text[i];
	}

	cout << endl;


  return 0;
}