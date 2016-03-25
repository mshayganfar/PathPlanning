#include <iostream>
#include <vector>

class Grid {

	public:
		Grid();
		~Grid();

		std::vector< std::vector<int> > buildGrid(int, int);
};
