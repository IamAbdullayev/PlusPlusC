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
	public:
		int data;
		Node* left;
		Node* rigth;

	public:
		Node(int data) {
			this->data = data;
			this->left = this->rigth = NULL;
		}
};



#endif