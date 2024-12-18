#include <iostream>

using namespace std; 


class Employee {
	protected:
		string name;
		double baseSalary;

	public:
		Employee(const string& n, double salary) : name(n), baseSalary(salary) {}
		virtual ~Employee() {} 

		virtual double calculateSalary() const {
			return baseSalary;
		}

		virtual void display() const {
			cout << "Name: " << name << endl;
			cout << "Salary: " << baseSalary << endl;
		}

};


class Manager : public Employee {
	private:
		double bonus;

	public:
		Manager() = default;
		Manager(const string& n, double salary, double bonus) : Employee(n, salary), bonus(bonus) {}

		double calculateSalary() const override {
			return baseSalary + bonus;
		}

		void display() const override {
			cout << "Manager - " << name << "; salary - " << calculateSalary() << endl;
		}

};

class Developer : public Employee {
	private:
		int numberOfProjects;

	public:
		Developer() = default;
		Developer(const string& n, double salary, int numberOfProjects) 
						: Employee(n, salary), numberOfProjects(numberOfProjects) {}

		double calculateSalary() const override {
			return baseSalary + (numberOfProjects * 1000);
		}

		void display() const override {
			cout << "Developer - " << name << "; salary - " << calculateSalary() << endl;
		}

};



int main() {
	const int numberOfEmployees = 4;
	Employee* employees[numberOfEmployees];

	employees[0] = new Manager("Mila", 2500.5, 1499.5);
	employees[1] = new Manager("Luna", 1500.5, 499.5);
	employees[2] = new Developer("Alex", 7000, 3);
	employees[3] = new Developer("Misha", 9000, 3);

	for (int i = 0; i < numberOfEmployees; ++i) {
		employees[i]->display();
	}

	for (int i = 0; i < numberOfEmployees; ++i) {
			delete employees[i];
	}

	return 0;
}
