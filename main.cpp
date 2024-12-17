#include "LibraryItem.h"


int main()
{
	Book item1("\"The Great Gatsby\"", 1925, "F. Scott Fitzgerald");
	EBook item2("\"The Hitchhiker's Guide to the Galaxy\"", 1979, "EPUB");
	AudioCD item3("\"Abbey Road\"", 1969, "The Beatles");

	item1.checkout();
	item2.checkin();
	item3.checkout();

	LibraryItem* items[3] = { &item1, &item2, &item3 };

	for (int i = 0; i < 3; ++i) {
		items[i]->displayInfo();
		cout << endl;
	}

	// item1.displayInfo();
	// item2.displayInfo();
	// item3.displayInfo();

	return 0;
}