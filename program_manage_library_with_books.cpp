#include "library_with_books.h"


// A program to manage a library with books
int main()
{

	const int NUMBER_OF_BOOKS = 2;
	Book* library = new Book[NUMBER_OF_BOOKS];


	cout << "Enter details (title, author, and year) for " << NUMBER_OF_BOOKS << " books:" << endl;
	for (int i = 0; i < NUMBER_OF_BOOKS; ++i) {
		string bookTitle;
		string bookAuthor;
		int bookYear;

		getline(cin, bookTitle); 
		getline(cin, bookAuthor);
		cin >> bookYear;
		cin.ignore();

		Book book(bookTitle, bookAuthor, bookYear);
		library[i] = book;
	}

	cout << endl << "Library Contents:" << endl;
	for (int i = 0; i < NUMBER_OF_BOOKS; ++i) {
		cout << "Book " << i + 1 << ":" << endl;
		library[i].displayDetails();
	}

	delete []library;
	return 0;
}