#ifndef TREE_H
#define TREE_H

#include "node.h"


class Tree {
	public:
		Node* root;

	public:
		Tree() {
			root = NULL;
		}


		Node* find(Node*& node, Node*& parent, bool& dataFind, int& data) {
			if (node == NULL) 
				return NULL;

			if (node->data == data) {
				dataFind = true;
				if (node == root)
					parent = node;
				return node;
			}

			if (data > node->data)
				if (node->rigth) {
					parent = node;
					return find(node->rigth, parent, dataFind, data);
				}	

			if (data < node->data)
				if (node->left) {
					parent = node;
					return find(node->left, parent, dataFind, data);
				}

			return node;
		}

		void find_min(Node*& node, Node*& parent, Node*& minNodeParent, Node*& minNode) {
			if (node->left != NULL) 
				return find_min(node->left, node, minNodeParent, minNode);

			minNode = node;
			minNodeParent = parent;
		}

	
		Tree& append(int data) {
			Node* node = new Node(data);
			if (root == NULL) {
				root = node;
				return *this;
			}
			
			bool dataFind;
			Node* parentNode = NULL;
			parentNode = find(root, parentNode, dataFind, data);
			
			if (parentNode && dataFind != true) {
				if (data > parentNode->data) {
					parentNode->rigth = node;
					return *this;
				}
				if (data < parentNode->data) {
					parentNode->left = node;
					return *this;
				}
			}

			delete node;
			return *this;
		}


		void delLeaf(Node*& node, Node*& parent) {
			if (parent->left == node) 
				parent->left = NULL;
			if (parent->rigth == node) 
				parent->rigth = NULL;

			delete node;
		}

		void delOneChild(Node*& node, Node*& parent) {
			if (parent->left == node) {
				if (node->left != NULL)
					parent->left = node->left;
				if (node->rigth != NULL)
					parent->left = node->rigth;
			}
			if (parent->rigth == node) {
				if (node->left != NULL)
					parent->rigth = node->left;
				if (node->rigth != NULL)
					parent->rigth = node->rigth;
			}

			delete node;
		}

		void delTwoChild(Node*& node, Node*& parent) {
			Node* minNode = NULL;
			Node* minNodeParent = NULL;
			find_min(node->rigth, node, minNodeParent, minNode);

			node->data = minNode->data; 

			if (minNode->left == NULL && minNode->rigth == NULL)
				delLeaf(minNode, minNodeParent);
			else if (minNode->left == NULL || minNode->rigth == NULL)
				delOneChild(minNode, minNodeParent);
		}
		

		void deleteNode(int data) {
			bool dataFind = NULL;
			Node* parent = NULL;
			Node* node = find(root, parent, dataFind, data);

			if (!dataFind) {
				cout << endl;
				cout << "No data found to delete" << endl;
				cout << endl;
				return;
			}

			if (node->left == NULL && node->rigth == NULL)
				delLeaf(node, parent);
			else if (node->left == NULL || node->rigth == NULL)
				delOneChild(node, parent);
			else 
				delTwoChild(node, parent);
		}


		void displayTree(Node*& node) {
			if (node == NULL) 
				return;

			displayTree(node->left);
			displayTree(node->rigth);
			cout << node->data << endl;
		}

		void printTree(const Node* node) const;

};



// Implementation
void Tree::printTree(const Node* node) const {
	if (node == NULL) 
		return;
	
	vector<const Node*> nodes;
	nodes.push_back(node);

	while (!nodes.empty()) {
		vector<const Node*> nodes_n;

		for (int i = 0; i < nodes.size(); ++i) {
			cout << nodes[i]->data << " ";
			if (nodes[i]->left) 
				nodes_n.push_back(nodes[i]->left);
			if (nodes[i]->rigth) 
				nodes_n.push_back(nodes[i]->rigth);
		}
		cout << endl;
		nodes = nodes_n;
	}
}



#endif