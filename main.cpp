#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	
	string text = "abcdef";

	unordered_map<char, int> unique_symbols;

	for (int i = 0; i < text.size(); ++i) {
		unique_symbols[text[i]] = i;
	}

	// for (int i = 0; i < text.size(); ++i) {
	// 	cout << "Key: " << (unique_symbols.begin())->first << "; Value: " << (unique_symbols.begin())->second << endl;
	// }

	// for (auto it = unique_symbols.begin(); it != unique_symbols.end(); ++it) {
  //   cout << it->first << " : " << it->second << endl;
	// }


	for (const auto& symbol : unique_symbols) {
		cout << "Key: " << symbol.first << "; Value: " << symbol.second << endl;
	}

}