#include <iostream>
#include "BinaryTree.h"
#include "Grid.h"

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

	Grid gObj;
	vector< vector <int> > grid = gObj.buildGrid(3, 4);

	for (int x = 0 ; x < 3 ; x++) {
		for (int y = 0 ; y < 4 ; y++) {
			cout << grid[x][y] << ", ";
		}
		cout << endl;
	}

	BinaryTree bt;

	bt.insertTree(2);

	Node *node = bt.searchTree(2);

	cout << "\nKey: " << node->key << endl;

	pp.dfs();

	return 0;
}
