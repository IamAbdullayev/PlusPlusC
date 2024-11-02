#ifndef USERSTRUCT_H
#define USERSTRUCT_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;


class Employee {
	int employeeID;
	string employeeName;
	string employeeDesignation;
	double employeeSalary;

	public:
	// Default constructor
		Employee() {
			// C++ compilers implicitly pass "this" pointer
			employeeID = 0;
			employeeName = "";
			employeeDesignation = "";
			employeeSalary = 0.0;
		}

		// Parametric constructor with 1 parameters
		Employee(const int& employeeID) {
			this->employeeID = employeeID;
			employeeName = "---";
			employeeDesignation = "---";
			employeeSalary = 0.0;
		}
		// Parametric constructor with 2 parameters
		Employee(const int& employeeID, const string& employeeName) {
			this->employeeID = employeeID;
			this->employeeName = employeeName;
			employeeDesignation = "---";
			employeeSalary = 0.0;
		}
		// Parametric constructor with 3 parameters
		Employee(const int& employeeID, const string& employeeName, const string& employeeDesignation) {
			this->employeeID = employeeID;
			this->employeeName = employeeName;
			this->employeeDesignation = employeeDesignation;
			employeeSalary = 0.0;
		}
		// Parametric constructor with 4 parameters
		Employee(const int& employeeID, const string& employeeName, const string& employeeDesignation, const double& employeeSalary) {
			this->employeeID = employeeID;
			this->employeeName = employeeName;
			this->employeeDesignation = employeeDesignation;
			this->employeeSalary = employeeSalary;
		}

		// Setters (here you need to explicitly specify the "this" pointer, since(because) the names of the variables and parameters are the same)
		void setID(const int& employeeID) {
			this->employeeID = employeeID;
		}

		void setName(const string& employeeName) {
			this->employeeName = employeeName;
		}

		void setDesignation(const string& employeeDesignation) {
			this->employeeDesignation = employeeDesignation;
		}

		void setSalary(const double& employeeSalary) {
			this->employeeSalary = employeeSalary;
		}



		// Print
		void printEmployeeDetails() {
			// C++ compilers implicitly pass "this" pointer
			cout << this->employeeID << endl;
			cout << employeeName << endl;
			cout << employeeDesignation << endl;
			cout << employeeSalary << endl;
		}

};




#endif