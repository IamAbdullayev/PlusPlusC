#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>
using namespace std;


class Shape {
	protected:
		string_view name;

	public:
		Shape(string_view name) : name(name) {};
		virtual void draw();
};



// Implementations
void Shape::draw() {
	cout << "The picture's " << name << " is drawing\n";
}



#endif