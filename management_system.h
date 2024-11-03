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
    private:
				string name;
				int age;
				string position;
				double salary;

    public:
				// Setters
				void setName(const string& name) {
					this->name = name;
				}
        void setAge(const int& age) {
					this->age = age;
				}
        void setPosition(const string& position) {
					this->position = position;
				}
        void setSalary(const double& salary) {
					this->salary = salary;
				}

				// Getters
        string getName() const {
					return name;
				}
        int getAge() const {
					return age;
				}
        string getPosition() const {
					return position;
				}
        double getSalary() const {
					return salary;
				}

};




#endif