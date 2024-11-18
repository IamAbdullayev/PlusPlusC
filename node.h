#ifndef NODE_H
#define NODE_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


struct Node
{
	double data;
	Node* next;
	Node* prev;

	Node(const double& data) {
		this->data = data;
		this->next = this->prev = NULL;
	}
};



#endif