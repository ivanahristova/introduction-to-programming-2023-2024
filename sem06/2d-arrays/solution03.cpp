#include <iostream>

const int MAX = 5;

bool isTriangularMatrix(int matrix[][MAX]) {
    // Проверка за ненулеви елементи под главния диагонал
    bool isTriangularUnderMainDiag = true;
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            if (i > j && matrix[i][j] != 0) {
                isTriangularUnderMainDiag = false; // Ако има ненулев елемент под главния диагонал, матрицата не е триъгълна
                break;
            }
        }
        if (!isTriangularUnderMainDiag) {
            break;
        }
    }

    // Проверка за ненулеви елементи над главния диагонал
    bool isTriangularAboveMainDiag = true;
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            if (i < j && matrix[i][j] != 0) {
                isTriangularAboveMainDiag = false; // Ако има ненулев елемент над главния диагонал, матрицата не е триъгълна
            }
        }
        if (!isTriangularAboveMainDiag) {
            break;
        }
    }

    return isTriangularAboveMainDiag || isTriangularUnderMainDiag;
}

int main() {
    int matrix[MAX][MAX] = { {1, 2, 4, 5, 3},
                             {0, 4, 5, 2, 5},
	                         {0, 0, 3, 4, 6},
	                         {0, 0, 0, 7, 6},
	                         {0, 0, 0, 0, 8}};

    std::cout << isTriangularMatrix(matrix);
}
