#include <iostream>

#define BOARD_WIDTH 20
#define BOARD_Height 20

using namespace std;

class Node {

	public:
		Node *left;
		Node *right;
		int key;
};

class BinaryTree {

	public:
		BinaryTree();
		~BinaryTree();

		void insertTree(int);
		Node * searchTree(int);
		void destroyTree();

	private:
		Node *root;

		void insertTree(int, Node*);
		Node * searchTree(int, Node*);
		void destroyTree(Node*);
};

BinaryTree::BinaryTree() {
	root = NULL;
}

void BinaryTree::destroyTree(Node *node) {
	destroyTree(node->left);
	destroyTree(node->right);
	delete node;
}

void BinaryTree::insertTree(int key, Node *node) {
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

Node* BinaryTree::searchTree(int key, Node *node) {
	if (node != NULL) {
		if (key == node->key)
			return node;

		if (key < node->key)
			return searchTree(key, node->left);
		else
			return searchTree(key, node->right);
	}
	else return NULL;
}

void BinaryTree::insertTree(int key) {

	if (root != NULL)
		insertTree(key, root);
	else
		root = new Node;
		root->key   = key;
		root->left  = NULL;
		root->right = NULL;
}

Node* BinaryTree::searchTree(int key) {
	return searchTree(key, root);
}

void BinaryTree::destroyTree() {
	destroyTree(root);
}

class PathPlanning {

	private:


	public:
		void dfs();
		void bfs();
		void dijkstra();
		void aStar();
};

void PathPlanning::dfs() {
		cout << "Begin: " << endl;
		cout << "Target: " << endl;
}

int main() {

	PathPlanning pp;

	pp.dfs();

	return 0;
}
