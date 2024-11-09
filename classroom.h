#ifndef CLASSROOM_H
#define CLASSROOM_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;



class Classroom {
	private:
		vector<Student> students;

	public:
		// Member functions
		void addStudent(const Student& student) {
			this->students.push_back(student);
		}

		void displayStudentsDetails() {
			for (int i = 0; i  < students.size(); ++i) {
				cout << "Student name: " << students[i].studentName << endl;
				cout << "Roll Number: " << students[i].rollNumber << endl;
				cout << "Maths Marks: " << students[i].mathsMarks << endl;
				cout << "Physics Marks: " << students[i].physicsMarks << endl;
				cout << "Chemistry Marks: " << students[i].chemistryMarks << endl;
				cout << endl;
			}
		}

		void displayStudentsAverageMarks() {
			for (int i = 0; i  < students.size(); ++i) {
				double averageMark = (students[i].mathsMarks + students[i].physicsMarks + students[i].chemistryMarks) / 3;
				cout << students[i].studentName << "'s average marks: " << averageMark << endl;
			}
			cout << endl;
		}


};



#endif