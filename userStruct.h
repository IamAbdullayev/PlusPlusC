#ifndef USERSTRUCT_H
#define USERSTRUCT_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;



class User {
// ==
	private:

// == Properties (Member variables) ==============================================================================
		string userName = "";
		string password = "";
		string login = "";
		string phoneNumber = "";

// ==
	public: 

// == Properties =================================================================================================
	string country;


// == Behaviours (methods) =======================================================================================

	// == Constructors =============================================================================================
		// == Default constructor ====================================================================================
		User ();

		// == Constructor with parameters ============================================================================
		User (const string&);

	// == Setters ==================================================================================================
		void setPassword(const string&);
		void setLogin(const string&);
		void setPhoneNumber (const string&);
		void setUserName(const string&);
		void setCountry(const string&);

	// == Getters ==================================================================================================
		string getUserName();
		string getLogin();
		string getPassword();
		string getPhoneNumber();
		string getCountry();

// ==============================================================================================================

};





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


#endif