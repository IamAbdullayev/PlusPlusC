#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>

using namespace std;

bool isAnagram(string word_1, string word_2) {
	bool mark;
	int counter_1, counter_2;

	int length = (word_1.length() == word_2.length()) ? word_1.length() : 0;

	if(length == 0) return false;
	for(int i = 0; i < length; ++i) {
		mark = false;
		counter_1 = 0;
		counter_2 = 0;

		for(int j = 0; j < length; ++j) {
			if(word_1[i] == word_2[j]) {
				for(int k = 0; k < length; ++k) {
					if(word_1[i] == word_1[k]) counter_1++;
					if(word_2[j] == word_2[k]) counter_2++;
				}
				
				if(counter_1 == counter_2) {
					mark = true;
				}
			}
		}

		if(!mark) return false;
	}

	return mark;
}