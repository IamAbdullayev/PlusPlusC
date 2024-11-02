#include "employees.h"


int main()
{
	// system("cls");

	Employee employee1(1001, "Ramazan");
	Employee employee2;

	employee1.setSalary(5050.5);

	employee2.setID(1002);
	employee2.setName("Abdullayev");
	employee2.setDesignation("Engineer");
	employee2.setSalary(10000.5);


	// Displaying employee details
	cout << "Employee 1 Details: " << endl;
	employee1.printEmployeeDetails();
	cout << endl;

	cout << "Employee 2 Details: " << endl;
	employee2.printEmployeeDetails();
	cout << endl;

	return 0;
}