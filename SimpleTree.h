class Node {

	public:
		Node *left;
		Node *right;
		int key;
};

class SimpleTree {

	public:
		SimpleTree();
		~SimpleTree();

		void insertTree(int);
		Node * searchTree(int);
		void destroyTree();

	private:
		Node *root;

		void insertTree(int, Node*);
		Node * searchTree(int, Node*);
		void destroyTree(Node*);
};
