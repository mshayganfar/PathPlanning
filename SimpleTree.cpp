#include <iostream>
#include "SimpleTree.h"

SimpleTree::SimpleTree() {
	root = NULL;
}

SimpleTree::~SimpleTree() {
	destroyTree();
}

void SimpleTree::destroyTree(Node *node) {
	destroyTree(node->left);
	destroyTree(node->right);
	delete node;
}

void SimpleTree::insertTree(int key, Node *node) {
	if (key < node->key) {
		if (node->left != NULL)
			insertTree(key, node->left);
		else {
			node->left = new Node;
			node->left->key   = key;
			node->left->left  = NULL;
			node->left->right = NULL;
		}
	}
	else if (key >= node->key) {
		if (node->right != NULL)
			insertTree(key, node->right);
		else {
			node->right = new Node;
			node->right->key   = key;
			node->right->right = NULL;
			node->right->left  = NULL;
		}
	}
}
