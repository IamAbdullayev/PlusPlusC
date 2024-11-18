#include "linked_list.h"


int main()
{
	LinkedList* list = new LinkedList();

	list->push_front(1.1);
	list->push_back(2.2);
	list->push_back(3.3);
	list->push_front(4.4);
	list->display();

	list->pop_front();
	list->display();
	
	list->pop_back();
	list->display();

	list->insert(0, 0.0);
	list->display();

	list->insert(1, 0.5);
	list->display();

	list->insert(4, 3.3);
	list->display();

	list->erase(2);
	list->display();

	list->erase(1);
	list->display();

	list->erase(3);
	list->display();

	cout << boolalpha;
	cout << list->search(1.1);


	return 0;
}