#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>

using namespace std;


string convertToHex(int num) {
	string hexNum;
	if(num <= 0) return hexNum = '0';

	while(num) {
		string hexDig;

		if((num % 16) == 10) hexDig = 'A';
		if((num % 16) == 11) hexDig = 'B';
		if((num % 16) == 12) hexDig = 'C';
		if((num % 16) == 13) hexDig = 'D';
		if((num % 16) == 14) hexDig = 'E';
		if((num % 16) == 15) hexDig = 'F';

		if ((num % 16) < 10) hexDig = to_string(num % 16);

		hexNum = hexDig + hexNum;

		num /= 16;
	}

	return hexNum;
}


string convertToBinary(int num) {
	string binNum;
	if(num <= 0) return binNum = '0';

	while(num > 0) {
		string binDig = to_string(num % 2);
		binNum = binDig + binNum;
		
		num /= 2;
	}

	return binNum;
}


string convertToOctal(int num) {
	string octNum;
	if(num <= 0) return octNum = '0';

	while(num > 0) {
		string octDig = to_string(num % 8);
		octNum = octDig + octNum;
		
		num /= 8;
	}

	return octNum;
}