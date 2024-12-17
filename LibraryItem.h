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



//========================
class LibraryItem {
	protected:
		string title;
		int year;
		string status;

	public:
		LibraryItem() = default;
		LibraryItem(string_view title, int year);
		virtual void checkout();
		virtual void checkin();
		virtual void displayInfo() const {};
};


// Implementation
LibraryItem::LibraryItem(string_view title, int year) : title(title), year(year) {}
void LibraryItem::checkout() { status = "Checked out"; };
void LibraryItem::checkin() { status = "Checked in"; };


// ====================================
class Book : public LibraryItem {
	private:
		string author;

	public:
		Book(string_view title, int year, string_view author);
		void displayInfo() const override;
};

class EBook : public LibraryItem {
	private:
		string format;

	public:
		EBook(string_view title, int year, string_view format);
		void displayInfo() const override;
};

class AudioCD : public LibraryItem {
	private:
		string artist;

	public:
		AudioCD(string_view title, int year, string_view artist);
		void displayInfo() const override;
};



// Implementation
Book::Book(string_view title, int year, string_view author) : LibraryItem(title, year), author(author) {}
EBook::EBook(string_view title, int year, string_view format) : LibraryItem(title, year), format(format) {}
AudioCD::AudioCD(string_view title, int year, string_view artist) : LibraryItem(title, year), artist(artist) {}

void Book::displayInfo() const {
	cout << "Book Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Year: " << year << endl;
	cout << "Status: " << status << endl;
}

void EBook::displayInfo() const {
	cout << "EBook Title: " << title << endl;
	cout << "Author: " << format << endl;
	cout << "Year: " << year << endl;
	cout << "Status: " << status << endl;
}

void AudioCD::displayInfo() const {
	cout << "Audio CD Title: " << title << endl;
	cout << "Author: " << artist << endl;
	cout << "Year: " << year << endl;
	cout << "Status: " << status << endl;
}



#endif