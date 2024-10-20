#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>

using namespace std;

template <typename T> T minimum(T a, T b) {
	T min = (a < b) ? a : b;
	return min;
}
