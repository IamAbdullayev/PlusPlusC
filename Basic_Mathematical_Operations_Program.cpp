#include "Mathematical_Operations.h"


int main()
{

	MathOperations math(20);

	// chained calls using pointers
	math.P_add(5)->P_divide(5)->P_multiply(100)->P_subtract(475);
	
	cout << "Result: " << math.getResult() << endl;

	// chained calls using references
	math.R_add(5).R_divide(5).R_multiply(100).R_subtract(475);

	cout << "Result: " << math.getResult() << endl;


}