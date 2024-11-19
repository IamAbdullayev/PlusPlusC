#include "linked_list_stack.h"


int main()
{
	LinkedListStack* stack = new LinkedListStack();

	stack->peek();

	stack->push(1)->push(2)->push(3)->push(4)->push(5);

	cout << "Size: " << stack->size() << endl << endl;

	stack->displayStack();
	stack->pop();
	stack->displayStack();

	cout << endl;
	stack->peek();
	cout << endl;

	stack->pop()->pop()->pop()->pop()->pop();

	stack->displayStack();

	return 0;
}