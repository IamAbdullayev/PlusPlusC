#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


class Person {
	protected:
		string name;
		int age;
		int grades;

	public:
		Person(string name, int age, int grades) {
			this->name = name;
			this->age = age;
			this->grades = grades;
		}

		int getGrades() {
			return this->grades;
		}

};



#endif