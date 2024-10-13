#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>

using namespace std;

double toMeters(double centimeters) {
	return centimeters / 100;
}

double toKM(double centimeters) {
	return toMeters(centimeters) / 1000;
}