#include <iostream>

// Да се напише функция, която "завърта" квадратна матрица на 90 градуса в определена посока (ляво-l или дясно-r)

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

int main() {
    size_t rows = 5, cols = 5;
    int** matrix = createMatrix(rows, cols);
    printMatrix(matrix, rows, cols);

}
