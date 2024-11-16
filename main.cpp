#include "linked_list.h"


int main()
{
	  LinkedList list;

    list.append(1).append(2).append(3).append(4);
    list.display();

    list.insert_index(3, 10);
    list.display();
		list.remove(10);
		
    list.insert(5).display();

    bool isFound = list.search(7);

    cout << std::boolalpha << endl;
    cout << isFound;
    cout << endl << endl;

    list.remove(3).display().remove_end().display().remove_front().display();

    cout << endl;


	return 0;
}