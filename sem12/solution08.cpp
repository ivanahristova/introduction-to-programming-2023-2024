#include <iostream>

const int MAX_ROWS = 5;
const int MAX_COLS = 5;

bool solveMaze(char maze[MAX_ROWS][MAX_COLS], int row, int col, bool visited[MAX_ROWS][MAX_COLS]) {
    // TODO
    return false;
}

int main() {
    char maze[MAX_ROWS][MAX_COLS] = {{' ', '*', ' ', ' ', ' '},
                                     {' ', '*', '*', '*', ' '},
                                     {' ', ' ', ' ', ' ', ' '},
                                     {' ', '*', '*', '*', ' '},
                                     {' ', ' ', ' ', ' ', ' '}};

    bool visited[MAX_ROWS][MAX_COLS] = {false};

    std::cout << solveMaze(maze, 0, 0, visited);
}
