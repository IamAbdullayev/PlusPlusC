#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
	system("cls");

	char text[1000];
	cin.getline(text, sizeof(text));

	for(int i = strlen(text) - 1; i >= 0; --i) {			// Reverse a String
		cout << text[i];
	}
	cout << endl;

  return 0;
}