#ifndef LIBRARY_H
#define LIBRARY_H

#include "LibraryItem.h"


class Library {
	vector<LibraryItem*> libraryItems;

	public:

		void addItem(LibraryItem* item) {
			libraryItems.push_back(item);
		}

		void displayAllItems() {
			for(auto item : libraryItems) {
				item->displayInfo();
				cout << "==========================" << endl;
			}
		}

};



#endif