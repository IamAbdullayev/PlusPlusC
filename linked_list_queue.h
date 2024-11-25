#ifndef LINKED_LIST_QUEUE_H
#define LINKED_LIST_QUEUE_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include "node.h"
using namespace std;


class LinkedListQueue 
{
	private:
	Node* head;
	Node* tail;

	public:
	LinkedListQueue() {
		this->head = this->tail = NULL;
	}

	~LinkedListQueue() {
		while (head != NULL) dequeue();
	}



	LinkedListQueue* enqueue(const double& data) {
		Node* node = new Node(data);

		if (head == NULL) {
			this->head = this->tail = node;
			return this;
		}

		this->tail->next = node;
		this->tail = node;
		return this;
	}


	int dequeue() {
		if (head == NULL) return 0;
		
		Node* node = head;
		int data = node->data;
		head = node->next;
		delete node;

		if (head == NULL) tail = NULL;
		return data;
	}
	
	int peek() {
		if (head != NULL) return head->data;
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

};



#endif