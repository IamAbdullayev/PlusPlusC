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

// == Properties (Member variables) ==============================================================================
	string country;


// == Behaviours (methods) =======================================================================================

	// == Constructors =============================================================================================
		// == Default constructor ====================================================================================
		User () {
			phoneNumber = "+994 ";		
		}

		// == Constructor with parameters ============================================================================
		User (const string& country) {
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

	// == Setters ==================================================================================================
		void setPassword(const string& newPassword) {
			if (newPassword.length() >= 8) {
				password = newPassword;
			} else {
				cout << "Invalid password. Login must have 8 or more characters" << endl;
			}
		}

		void setLogin(const string& newLogin) {
			if (newLogin.length() >= 4) {
				login = newLogin;
			} else {
				cout << "Invalid login. Login must have 6 or more characters" << endl;
			}
		}

		void setPhoneNumber (const string& phoneNum) {
			if (phoneNum.length() >= 9) {
				phoneNumber += phoneNum;
			} else {
				cout << "Invalid number of phone. It must have 9 digits." << endl;
			}
		}

		void setUserName(const string& newUserName) {
			userName = (newUserName.length() >= 1) ? newUserName : "####";
		}

		void setCountry(const string& newCountry) {
			country = (newCountry.length() >= 2) ? newCountry : "Azerbaijan";
		}

	// == Getters =================================================================================================
		string getUserName() {
			return userName;
		}

		string getLogin() {
			return login;
		}

		string getPassword() {
			return password;
		}

		string getPhoneNumber() {
			return phoneNumber;
		}

		string getCountry() {
			return country;
		}

// ==============================================================================================================


};