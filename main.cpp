#include "Teacher.h"


int main()
{
	Teacher teacher("Lola", 18, 3);
	teacher.reviewGrades();  // Accesses grades directly for review

	// grades is not directly accessible here, as it's protected
	// cout << "Teacher's grades: " << teacher.grades << endl;

	return 0;
}