#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>
using namespace std;


class LibraryItem {
	public:
		string title;
		string authorOrDirector;
		int publicationYear;

	public:
		LibraryItem(string_view title, string_view authorOrDirector, int publicationYear) {
			this->title = title;
			this->authorOrDirector = authorOrDirector;
			this->publicationYear = publicationYear;
		}

		virtual void displayInfo() {
			cout << "Title: " << this->title << endl;
			cout << "Author or Director: " << this->authorOrDirector << endl;
			cout << "Publication year: " << this->publicationYear << endl;
		}
};



class Book : public LibraryItem {
	public:
		string isbn;

	public:
		Book(string_view title, string_view authorOrDirector, int publicationYear, string_view isbn) 
							: LibraryItem(title, authorOrDirector, publicationYear), isbn(isbn) {}
		
		virtual void displayInfo() {
			LibraryItem::displayInfo();
			cout << "ISBN: " << this->isbn << endl;
		}
};



class DVD : public LibraryItem {
	public:
		int runtime;

	public:
		DVD(string_view title, string_view authorOrDirector, int publicationYear, int runtime) 
			: LibraryItem(title, authorOrDirector, publicationYear), runtime(runtime) {}
		virtual void displayInfo() {
			LibraryItem::displayInfo();
			cout << "Runtime: " << this->runtime << " minutes" << endl;
		}
};



#endif