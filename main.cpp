#include "Library.h"



int main() {

	Library library;

	Book book("***", "******", 1905, "15-45-54-54");
	DVD dvd("***", "******", 1905, 10);
	

	library.addItem(&dvd);
	library.addItem(&book);

	library.displayAllItems();

	return 0;
}




