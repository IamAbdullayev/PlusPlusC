#ifndef LINKED_LIST_H
#define LINKED_LIST_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include "node.h"
using namespace std;


class LinkedList {
	Node* head;
	Node* tail;

	public:
		LinkedList() {
			this->head = nullptr;
			this->tail = nullptr;
		}

		~LinkedList() {
			while (head != nullptr) remove_front();
		}
		

		// Member functions
		LinkedList& remove(int value) {
			if (head == nullptr) return *this;
			if (head == tail) {
				if (value == head->data) delete head;
				head = tail = nullptr;
				return *this;
			}
			if (value == head->data) {
				Node* temp = head;
				head = head->next;
				delete temp;
				return *this;
			}

			Node* node = head;
			for (; node->next->data != value; node = node->next);
			Node* temp = node->next;
			node->next = temp->next;
			delete temp;


			// Node* node = head;
			// while (node != nullptr) {

			// 	if (value == node->next->data) {
			// 		Node* temp = node->next;
			// 		node->next = temp->next;
			// 		delete temp;
			// 		return *this;
			// 	}

			// 	node = node->next;
			// }


			return *this;
		}

		LinkedList& remove_front() {
			if (head == nullptr) return *this;
			if (head == tail) {
				delete head;
				head = tail = nullptr;
				return *this;
			}
			
			Node* node = head;
			head = node->next;
			delete node;
			return *this;
		}

		LinkedList& remove_end() {
			if (tail == nullptr) return *this;
			if (head == tail) {
				delete tail;
				head = tail = nullptr;
				return *this;
			}

			Node* node = head;
			for (; node->next != tail; node = node->next);
			node->next = nullptr;
			delete tail;
			tail = node;

			// Node* node = head;
			// while (node != nullptr) {

			// 	if (node->next == tail) {
			// 		node->next = nullptr;
			// 		delete tail;
			// 		tail = node;
			// 		return *this;
			// 	}

			// 	node = node->next;
			// }

			return *this;
		}


		LinkedList& insert_index(int k, int value) {
			if (k == 0) {
				Node* node = new Node(value);
				node->next = head;
				head = node;
				if (tail == nullptr) tail = node;
				return *this;
			}


			Node* left;
			Node* node_index = head;
			int n = 1;
			while (k != 0 && node_index != NULL && n != k && node_index->next != nullptr) {
				node_index = node_index->next;
				++n;
			}
			left = (n == k) ? node_index : NULL;
			if (left == NULL) return *this;

			Node* right = left->next;
			Node* node = new Node(value);

			left->next = node;
			node->next = right;

			if (right == nullptr) tail = node;

			return *this;
		}

		LinkedList& insert(int value) {
			Node* node = new Node(value);

			node->next = head;
			head = node;
			if (tail == nullptr) tail = node;

			// if (head == nullptr) {
			// 	head = tail = node;
			// 	return *this;
			// }
			// node->next = head;
			// head = node;

			return *this;
		}

		LinkedList& append(int value) {
			Node* node = new Node(value);

			if (head == nullptr) head = node;
			if (tail != nullptr) tail->next = node;
			tail = node;

			// if (head == nullptr) {
			// 	head = tail = node;
			// 	return *this;
			// }
			// tail->next = node;
			// tail = node;

			return *this;
		}


		LinkedList& display() {
			// Node* node = head;
			// for (; node->next != nullptr; node = node->next) {
			// 	cout << node->data << " ";
			// }

			Node* node = head;
			while(node != nullptr) {
				cout << node->data << " ";
				node = node->next;
			}

			cout << endl;
			return *this;
		}


		bool search(int value) {
			Node* node = head;
			for (; node->next != nullptr; node = node->next) {
				if (value == node->data) {
					return true;
				}
			}


			// Node* node = head;
			// while (node != nullptr) {
			// 	if (value == node->data) {
			// 		return true;
			// 	}
			// 	node = node->next;
			// }


			return false;
		}

};



#endif