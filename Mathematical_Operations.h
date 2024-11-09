#ifndef MATHEMATICAL_OPERATIONS_H
#define MATHEMATICAL_OPERATIONS_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;



class MathOperations {
	private:
		double result;

	public:
		// Constructor
		MathOperations(double);

		// Member functions
		MathOperations* P_add(int val);
		MathOperations* P_subtract(int val);
		MathOperations* P_multiply(int val);
		MathOperations* P_divide(int val);
		
		MathOperations& R_add(int val);
		MathOperations& R_subtract(int val);
		MathOperations& R_multiply(int val);
		MathOperations& R_divide(int val);

		double getResult() const;

};



// Inplementation
MathOperations::MathOperations(double initialResult) {
	this->result = initialResult;
}	

// chained calls using pointers
MathOperations* MathOperations::P_add(int val) {
	this->result += val;
	return this;
}

MathOperations* MathOperations::P_subtract(int val) {
	this->result -= val;
	return this;
}

MathOperations* MathOperations::P_multiply(int val) {
	this->result *= val;
	return this;
}

MathOperations* MathOperations::P_divide(int val) {
	this->result /= val;
	return this;
}


// chained calls using references
MathOperations& MathOperations::R_add(int val) {
	this->result += val;
	return *this;
}

MathOperations& MathOperations::R_subtract(int val) {
	this->result -= val;
	return *this;
}

MathOperations& MathOperations::R_multiply(int val) {
	this->result *= val;
	return *this;
}

MathOperations& MathOperations::R_divide(int val) {
	this->result /= val;
	return *this;
}




double MathOperations::getResult() const {
	return result;
}


#endif