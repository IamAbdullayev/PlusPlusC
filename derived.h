#ifndef DERIVED_H
#define DERIVED_H

#include "shape.h"

class Circle : public Shape {
		double radius;

	public:
		Circle(string_view name, double radius) : Shape(name), radius(radius) {}
		void draw() override;

};


class Square : public Shape {
		double hight;

	public:
		Square(string_view name, double hight) : Shape(name), hight(hight) {}
		void draw() override;

};


class Rectangle : public Shape {
		double length;
		double width;

	public:
		Rectangle(string_view name, double length, double width) : Shape(name), length(length), width(width) {}
		void draw() override;

};


class Triangle : public Shape {
		double length;
		double width;

	public:
		Triangle(string_view name, double length, double width) : Shape(name), length(length), width(width) {}
		void draw() override;

};



// Implementations
void Circle::draw() {
	cout << "Drawing a circle with his radius: " << radius << endl;
}


void Square::draw() {
	cout << "Drawing a square with his high: " << hight << endl;
}


void Rectangle::draw() {
	cout << "Drawing a rectangle with his width: " << width << " and length: " << length << endl;
}


void Triangle::draw() {
	cout << "Drawing a triangle with his width: " << width << " and length: " << length << endl;
}



#endif