#include <iostream>

// Дадени са две матрици: матрица А, която съдържа символи (букви, цифри или други символи) с размер NxN, и матрица B,
// която наричаме маска, със същич размер - NxN, но съдържа само нули и единици.
// Да се напише функция, която ще състави дума от символите в матрица A, които съответстват на позиции, където в матрица B има единица.

char** createMatrix(size_t rows, size_t cols) {
    char** matrix = new char*[rows];

    for (size_t i = 0; i < rows; i++) {
        matrix[i] = new char[cols];
        for (size_t j = 0; j < cols; j++) {
            matrix[i][j] = i*j + 'a';
        }
    }

    return matrix;
}

bool** createMask(size_t rows, size_t cols) {
    bool** matrix = new bool*[rows];

    for (size_t i = 0; i < rows; i++) {
        matrix[i] = new bool[cols];
        for (size_t j = 0; j < cols; j++) {
            matrix[i][j] = i*j % 2;
        }
    }

    return matrix;
}

void printMatrix(char** matrix, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void printMatrix(bool** matrix, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void freeMatrix(char** matrix, size_t rows) {
    for (size_t i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void freeMatrix(bool** matrix, size_t rows) {
    for (size_t i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void freeArray(char* matrix) {
    delete[] matrix;
}

char* maskMatrix1(char** matrix, bool** mask, size_t n) {
    char* result = new char[n*n + 1];
    int index = 0;

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            if (mask[i][j]) {
                result[index++] = matrix[i][j];
            }
        }
    }

    result[index] = '\0';
    return result;
}

void maskMatrix2(char** matrix, bool** mask, size_t rows, size_t cols, char* result) {
    int index = 0;
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            if (mask[i][j] == 1) {
                result[index++] = matrix[i][j];
            }
        }
    }

    result[index] = '\0';
}

int main() {
    size_t rows = 5, cols = 5;
    char** matrix = createMatrix(rows, cols);
    printMatrix(matrix, rows, cols);

    bool** mask = createMask(rows, cols);
    printMatrix(mask, rows, cols);

    // Вариант 1
    char* result1 = maskMatrix1(matrix, mask, rows);
    std::cout << result1 << std::endl;

    // Варинат 2
    char* result2 = new char[rows * cols + 1];
    maskMatrix2(matrix, mask, rows, cols, result2);
    std::cout << result2 << std::endl;

    freeMatrix(matrix, rows);
    freeMatrix(mask, rows);
    freeArray(result1);
    freeArray(result2);
}
