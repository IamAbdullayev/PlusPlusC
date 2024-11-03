#include "management_system.h"


int main()
{

	Employee emp1;

	// Setting
	emp1.setName("Murad");
	emp1.setAge(24);
	emp1.setPosition("Data Analyst");
	emp1.setSalary(2500.5);

	// Getting
	cout << emp1.getName() << endl;
	cout << emp1.getAge() << endl;
	cout << emp1.getPosition() << endl;
	cout << emp1.getSalary() << endl;
}