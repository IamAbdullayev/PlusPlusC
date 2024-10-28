#include "userStruct.h"


// Default constructor
User::User () {
	phoneNumber = "+994 ";		
}

// Constructor with parameters
User::User (const string& country) {
	if (country[0] == 'R' && country[1] == 'u') {
		phoneNumber = "+7 ";
	} else if (country[0] == 'G' && country[1] == 'e') {
		phoneNumber = "+995 ";
	} else if (country[0] == 'T' && country[2] == 'r') {
		phoneNumber = "+90 ";
	} else {
		phoneNumber = "+994 ";
	}
}

// Setters
void User::setPassword(const string& newPassword) {
	if (newPassword.length() >= 8) {
		password = newPassword;
	} else {
		cout << "Invalid password. Login must have 8 or more characters" << endl;
	}
}

void User::setLogin(const string& newLogin) {
	if (newLogin.length() >= 4) {
		login = newLogin;
	} else {
		cout << "Invalid login. Login must have 6 or more characters" << endl;
	}
}

void User::setPhoneNumber (const string& phoneNum) {
	if (phoneNum.length() >= 9) {
		phoneNumber += phoneNum;
	} else {
		cout << "Invalid number of phone. It must have 9 digits." << endl;
	}
}

void User::setUserName(const string& newUserName) {
	userName = (newUserName.length() >= 1) ? newUserName : "####";
}

void User::setCountry(const string& newCountry) {
	country = (newCountry.length() >= 2) ? newCountry : "Azerbaijan";
}


// Getters
string User::getUserName() {
	return userName;
}

string User::getLogin() {
	return login;
}

string User::getPassword() {
	return password;
}

string User::getPhoneNumber() {
	return phoneNumber;
}

string User::getCountry() {
	return country;
}