#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"

class Teacher : public Person {

	public:

		Teacher(string name, int age, int grades) : Person(name, age, grades) {};


		void reviewGrades() {
			cout << "Teacher is reviewing grades: " << this->name << " - " << this->grades << endl;
		}

};






#endif