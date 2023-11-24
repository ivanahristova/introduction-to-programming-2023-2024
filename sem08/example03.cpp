#include <iostream>

int main() {
    int** matrix;
    int rows = 3;
    matrix = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        int cols = i + 1;
        matrix[i] = new int[cols + 1];

        matrix[i][0] = cols;

        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j + 1];
        }
    }

    for (int i = 0; i < rows; ++i) {
        int cols = matrix[i][0];
        for (int j = 1; j <= cols; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
