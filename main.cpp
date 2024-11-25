#include "linked_list_queue.h"


int main()
{
	LinkedListQueue queue;
	
	queue.enqueue(10);
	queue.enqueue(20);
	queue.enqueue(30);

	cout << "Size: " << queue.size() << endl;   // Output: Size: 3
	cout << "Front: " << queue.peek() << endl;  // Output: Front: 10
	cout << "Dequeued: " << queue.dequeue() << endl;  // Output: Dequeued: 10
	cout << "Is Empty? " << queue.isEmpty() << endl;  // Output: Is Empty? 0 (false)
	cout << "Front: " << queue.peek() << endl;  // Output: Front: 20
	cout << "Dequeued: " << queue.dequeue() << endl;  // Output: Dequeued: 20
	cout << "Is Empty? " << queue.isEmpty() << endl;  // Output: Is Empty? 0 (false)
	cout << "Front: " << queue.peek() << endl;  // Output: Front: 30
	cout << "Dequeued: " << queue.dequeue() << endl;  // Output: Dequeued: 30
	cout << "Is Empty? " << queue.isEmpty() << endl;  // Output: Is Empty? 1 (true)

	return 0;
}