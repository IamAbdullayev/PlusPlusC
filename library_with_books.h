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


class Book {
	private:
		// Private attributes
		string bookTitle;
		string bookAuthor;
		int bookYear;

	public:
		// Default constructor
		Book();

		// Parameterized constructor
		Book(const string&, const string&, const int&);

		// Member function
		void displayDetails() const;

};



// Implementation
Book::Book() {
	this->bookTitle = "";
	this->bookAuthor = "";
	this->bookYear = 0;
}

Book::Book(const string& bookTitle, const string& bookAuthor, const int& bookYear) {
	this->bookTitle = bookTitle;
	this->bookAuthor = bookAuthor;
	this->bookYear = bookYear;
}

void Book::displayDetails() const {
	cout << "The title of the book: " << bookTitle << ".\n";
	cout << "The author of the book: " << bookAuthor << ".\n";
	cout << "The year of publication of the book: " << bookYear << ".\n";
}


#endif