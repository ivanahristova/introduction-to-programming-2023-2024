#include <iostream>

const int MAX_ROWS = 5;
const int MAX_COLS = 5;

bool isValidMove(char maze[MAX_ROWS][MAX_COLS], int row, int col, bool visited[MAX_ROWS][MAX_COLS]) {
    // Проверка дали сме извън границите на матрицата
    if (row < 0 || row >= MAX_ROWS || col < 0 || col >= MAX_COLS) {
        return false;
    }
    // Проверка дали това поле е валидно за преминаване
    return (maze[row][col] == ' ' && !visited[row][col]);
}

bool solveMaze(char maze[MAX_ROWS][MAX_COLS], int row, int col, bool visited[MAX_ROWS][MAX_COLS]) {
    // Ако сме стигнали края на лабиринта - долна дясна клетка
    if (row == MAX_ROWS - 1 && col == MAX_COLS - 1) {
        return true;
    }

    // Ако текущият ход е валиден, маркираме го като посетен
    if (isValidMove(maze, row, col, visited)) {
        visited[row][col] = true;

        // Проверяваме всички възможни посоки: надясно, надолу, наляво, нагоре
        int rowMoves[] = {0, 1, 0, -1};
        int colMoves[] = {1, 0, -1, 0};

        for (int i = 0; i < 4; ++i) {
            // Опитваме се да продължим в новата посока
            int newRow = row + rowMoves[i];
            int newCol = col + colMoves[i];

            // Рекурсивно извикваме функцията за следващото поле
            if (solveMaze(maze, newRow, newCol, visited)) {
                return true; // Намерили сме път
            }
        }

        // Ако не можем да продължим нито в една посока, отмаркираме текущото поле като непосетено
        visited[row][col] = false;
    }

    return false; // Ако не можем да намерим път, връщаме false
}

int main() {
    char maze[MAX_ROWS][MAX_COLS] = {
        {' ', '*', ' ', ' ', ' '},
        {' ', '*', '*', '*', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', '*', '*', '*', ' '},
        {' ', ' ', ' ', ' ', ' '}
    };

    bool visited[MAX_ROWS][MAX_COLS] = {false};

    std::cout << std::boolalpha << solveMaze(maze, 0, 0, visited);
}
