#include "tree.h"


int main()
{
	Tree tree;

	tree.append(4).append(6).append(2).append(7).append(5).append(1).append(3);

	tree.printTree(tree.root);
	cout << endl;

	cout << "=== Delete a node-leaf (5) ======================" << endl;
	tree.deleteNode(5);

	tree.printTree(tree.root);
	cout << endl;

	cout << "=== Delete a node with two children (4) ======================" << endl;
	tree.deleteNode(4);

	tree.printTree(tree.root);
	cout << endl;

	cout << "=== Delete a node-leaf (3) ======================" << endl;
	tree.deleteNode(3);

	tree.printTree(tree.root);
	cout << endl;

	cout << "=== Delete a node with one child (2) ======================" << endl;
	tree.deleteNode(2);

	tree.printTree(tree.root);
	cout << endl;

	return 0;
}