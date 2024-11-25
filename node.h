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
	int data;
	Node* next;

	Node(const double& data) {
		this->data = data;
		this->next = NULL;
	}
};



#endif