#include <iostream>
#include "BinaryTree.h"

#define BOARD_WIDTH 20
#define BOARD_Height 20

using namespace std;

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

	BinaryTree bt;

	bt.insertTree(2);

	Node *node = bt.searchTree(2);

	cout << "Key: " << node->key << endl;

	pp.dfs();

	return 0;
}
