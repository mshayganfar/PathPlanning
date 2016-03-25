#include <iostream>
#include <vector>
#include "Grid.h"

using namespace std;

Grid::Grid() { }

Grid::~Grid() { }

vector< vector<int> > Grid::buildGrid(int width, int height) {

	vector< vector<int> > grid;

	for (int x = 0 ; x < width ; x++) {
		grid.push_back(vector<int>());
	}

	for (int y = 0 ; y < height ; y++) {
		for (vector< vector<int> >::iterator it = grid.begin() ; it != grid.end() ; ++it) {
			it->push_back(1);
		}
	}

	return grid;
}
