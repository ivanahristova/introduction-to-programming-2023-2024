#include <iostream>

const int ROW = 4;
const int COL = 4;

bool isValid(int row, int col, int matrix[ROW][COL], bool* visited) {
    return (row >= 0 && row < ROW && col >= 0 && col < COL
        && matrix[row][col] != 'X'
        && !visited[row * COL + col]);
}

// Намира пътищата от текущата позиция до целите ('.')
void findPaths(int row, int col, int matrix[][COL], bool* visited, char path[], int pathIndex) {
    if (matrix[row][col] == '.') {
        for (int i = 0; i < pathIndex; ++i) {
            std::cout << path[i];
        }
        std::cout << std::endl;
        return;
    }

    visited[row * COL + col] = true;

    int rowMoves[] = {1, 0};
    int colMoves[] = {0, 1};
    char directions[] = {'D', 'R'};

    for (int i = 0; i < 2; ++i) {
        int nextRow = row + rowMoves[i];
        int nextCol = col + colMoves[i];

        if (isValid(nextRow, nextCol, matrix, visited)) {
            path[pathIndex] = directions[i];
            findPaths(nextRow, nextCol, matrix, visited, path, pathIndex + 1);
            path[pathIndex] = '\0'; // Backtrack
        }
    }

    visited[row * COL + col] = false;
}

// Намира всички пътища до цели в матрицата
void findAllPaths(int matrix[][COL]) {
    bool visited[ROW * COL] = {false};
    char path[ROW + COL - 1];
    path[0] = 'S'; // Начало
    findPaths(0, 0, matrix, visited, path, 1);
}

int main() {
    int matrix[ROW][COL] = {
        {'O', 'X', 'O', '.'},
        {'O', 'O', 'X', 'O'},
        {'X', 'O', 'O', 'O'},
        {'O', 'X', '.', 'O'}
    };

    findAllPaths(matrix);
}
