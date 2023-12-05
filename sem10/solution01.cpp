#include <iostream>

// Да се напише функция, която приема указател към масив от целочислени масиви и създава негово копие

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

void printMatrix(int** matrix, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int** copyMatrix(int** matrix, size_t rows, size_t cols) {
    int** copiedMatrix = new int*[rows];
    for (size_t i = 0; i < rows; i++) {
        copiedMatrix[i] = new int[cols];
        for (size_t j = 0; j < cols; j++) {
            copiedMatrix[i][j] = matrix[i][j];
        }
    }

    return copiedMatrix;
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

    int** copiedMatrix = copyMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    // free(matrix);
    freeMatrix(matrix, rows);
    freeMatrix(copiedMatrix, rows);
}
