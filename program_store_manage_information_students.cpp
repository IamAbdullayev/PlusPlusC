#include "classroom.h"


int main()
{
	Classroom classroom_1;


	int numStudents;
	cout << "Enter the number of students: ";
	cin >> numStudents;

	for (int i = 0; i < numStudents; ++i) {
		cout << "Enter details for student " << i + 1 << endl;

		Student student_1;
		cout << "Mtudent name: ";
		cin >> student_1.studentName;
		cout << "Moll Number: ";
		cin >> student_1.rollNumber;
		cout << "Marks in Maths: ";
		cin >> student_1.mathsMarks;
		cout << "Marks in Physics: ";
		cin >> student_1.physicsMarks;
		cout << "Marks in Chemistry: ";
		cin >> student_1.chemistryMarks;

		classroom_1.addStudent(student_1);
		cout << endl;
	}


	cout << "Details of all students:" << endl;
	classroom_1.displayStudentsDetails();

	cout << "Average marks of each student:" << endl;
	classroom_1.displayStudentsAverageMarks();


}