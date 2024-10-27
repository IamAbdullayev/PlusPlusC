#include "userStruct.h"

int main() {
	// system("cls");
	// cout << boolalpha;

	string country;
	cin >> country;

	// Make object
	User admin(country);

	// Setters
	admin.setUserName("Ramazan");
	admin.setLogin("ramazanabdullayev709@gmail.com");
	admin.setPassword("Ramo.709");
	admin.setCountry(country);
	admin.setPhoneNumber("(51) 521-77-87");

	// Getters
	cout << admin.getUserName() << endl;
	cout << admin.getPhoneNumber() << endl;
	cout << admin.getCountry() << endl << endl;

	cout << "Private details: " << endl;
	cout << admin.getLogin() << endl;
	cout << admin.getPassword() << endl;



	return 0;
}

