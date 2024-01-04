#include <iostream>

const int ROW = 4;
const int COL = 4;

void findAllPaths(int grid[][COL]) {
    // TODO
}

int main() {
    int grid[ROW][COL] = {{'O', 'X', 'O', '.'},
                          {'O', 'O', 'X', 'O'},
                          {'X', 'O', 'O', 'O'},
                          {'O', 'X', '.', 'O'}};

    findAllPaths(grid);
}
