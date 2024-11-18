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


class LinkedList 
{
	private:
		Node* head;
		Node* tail;

	public:
		LinkedList() {
			this->head = this->tail = NULL;
		}	

		~LinkedList() {
			while(head != NULL) pop_front();
		}

		void pop_front() {
			if (head == NULL) return;
			if (head == tail) {
				delete head;
				head = tail = NULL;
				return;
			}

			// Node* node = head;
			// head = head->next;
			// head->prev = NULL;
			// delete node;

			head = head->next;
			delete head->prev;
			head->prev = NULL;
		}

		void pop_back() {
			if (head == NULL) return;
			if (head == tail) {
				delete tail;
				head = tail = NULL;
			}

			tail = tail->prev;
			delete tail->next;
			tail->next = NULL;
		}

		void push_front(const double data) {
			Node* node = new Node(data);

			// node->next = head;
			// if (head != NULL) head->prev = node;
			// head = node;
			// if (tail == NULL) tail = node;

			if (head == NULL) {
				head = tail = node; 
				return;
			}
			node->next = head;
			head->prev = node;
			head = node;
		}

		void push_back(const double data) {
			Node* node = new Node(data);

			// node->prev = tail;
			// if (tail != NULL) tail->next = node;
			// tail = node;
			// if (head == NULL) head = node;

			if (head == NULL) {
				head = tail = node;
				return;
			}

			node->prev = tail;
			tail->next = node;
			tail = node;
		}

		Node* get_at(int k) {
			int n = 1;

			// Node* ptr = head;
			// while(ptr != NULL) {
			// 	if (n == k) return ptr;
			// 	ptr = ptr->next;
			// 	n++;
			// }

			for (Node* ptr = head; ptr != NULL; ptr = ptr->next) {
				if (n == k) return ptr;
				n++;
			}
		}

		Node* operator [] (int k) {
			return get_at(k);
		}

		void insert(int k, const double data) {
			Node* left = get_at(k);
			if (left == NULL) return push_front(data);

			Node* right = left->next;
			if (right == NULL) return push_back(data);

			Node* node = new Node(data);
			node->next = right;
			right->prev = node;
			node->prev = left;
			left->next = node;
				
		}

		void erase(int k) {
			Node* node = get_at(k);
			if (node == NULL) return;
			if (node->prev == NULL) return pop_front();
			if (node->next == NULL) return pop_back();

			Node* left = node->prev;
			Node* right = node->next;
			left->next = right;
			right->prev = left;

			delete node;
		}

		void display() {
			for (Node* ptr = head; ptr != NULL; ptr = ptr->next) {
				cout << ptr->data << " ";
			}
			cout << endl;
		}

		bool search(const double& data) {
			for (Node* ptr = head; ptr != NULL; ptr = ptr->next) {
				if (ptr->data == data) return true;
			}
			return false;
		}


};



#endif