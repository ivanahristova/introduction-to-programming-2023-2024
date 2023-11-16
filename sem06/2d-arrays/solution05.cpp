#include <iostream>

const int MAX = 100;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortRows(int matrix[MAX][2], int N) {
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (matrix[i][0] > matrix[j][0] || (matrix[i][0] == matrix[j][0] && matrix[i][1] > matrix[j][1])) {
                swap(&matrix[i][0], &matrix[j][0]);
                swap(&matrix[i][1], &matrix[j][1]);
            }
        }
    }
}

void printMatrix(int matrix[MAX][2], int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[MAX][2] = {1, 4,
                        3, 16,
	                    4, 5,
	                    1, 2,
	                    20, 0,
	                    6, 7};

    int N = 6;

    sortRows(matrix, N);
    printMatrix(matrix, N);
}
