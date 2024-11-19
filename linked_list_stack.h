#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include "node.h"
using namespace std;


class LinkedListStack 
{
	private:
	Node* head;

	public:
	LinkedListStack() {
		this->head = NULL;
	}

	~LinkedListStack() {
		while (head != NULL) pop_front();
	}

	void pop_front() {
		if (head == NULL) return;

		Node* node = head;
		head = head->next;
		delete node;
	}

	LinkedListStack* push(const double& data) {
		Node* node = new Node(data);
		node->next = head;
		head = node;
		return this;
	}

	Node* getHead() {
		return head;
	}

	LinkedListStack* pop() {
		if (head == NULL) {
			cout << "Nothing to pop (^_^)" << endl;
			return this;
		} 
		
		Node* node = head;
		head = node->next;
		delete node;

		return this;
	}
	
	void peek() {
		if (head == NULL) {
			cout << "Nothing to peek (^_^)" << endl;
			return;
		}
		
		cout << "Peek: " << head->data << endl;
	}

	bool isEmpty() {
		if (head == NULL) return true;
		return false;
	}

	int size() {
		int counter = 0;
		for (Node* ptr = head; ptr != NULL; ptr = ptr->next) {
			++counter;
		}
		return counter;
	}

	void displayStack() {
		if (head == NULL) {
			cout << "Stack is empty!" << endl; 
			return;
		}
		
		for (Node* ptr = head; ptr != NULL; ptr = ptr->next) {
			cout << ptr->data << " ";
		}
		cout << endl;
	}

};



#endif