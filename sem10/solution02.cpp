#include <iostream>

// Да се напише програма, която приема две матрици от цели числа като параметри.
// Първата остава непроменена, а във втората се записва резултата от четенето на първата матрица "отзад-напред"

void printMatrix(int** matrix, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int** createMatrix(size_t rows, size_t cols) {
    int** matrix = new int*[rows];

    for (size_t i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (size_t j = 0; j < cols; j++) {
            matrix[i][j] = i*j;
        }
    }

    return matrix;
}

void reverseMatrix(int** original, int** reversed, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            // std::cout << original[rows - 1 - i][cols - 1 - j];
            reversed[i][j] = original[rows - 1 - i][cols - 1 - j];
        }
    }
}

void freeMatrix(int** matrix, size_t rows) {
    for (size_t i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    size_t rows = 5, cols = 5;
    int** matrix = createMatrix(rows, cols);
    printMatrix(matrix, rows, cols);

    int** reversed = new int*[rows];
    for (size_t i = 0; i < rows; i++) {
        reversed[i] = new int[cols];
    }

    reverseMatrix(matrix, reversed, rows, cols);

    printMatrix(reversed, rows, cols);

    freeMatrix(matrix, rows);
    freeMatrix(matrix, rows);
}
