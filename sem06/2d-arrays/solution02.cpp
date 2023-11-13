#include <iostream>

const int ROWS = 3;
const int COLS = 3;

void findAndPrintMinElementPerRow(const int arr[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        int minElement = arr[i][0];

        for (int j = 1; j < COLS; ++j) {
            if (arr[i][j] < minElement) {
                minElement = arr[i][j];
            }
        }

        std::cout << minElement << ' ';
    }

    std::cout << std::endl;
}

void countNegativeElementsPerRow(int arr[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        int countNegatives = 0;

        for (int j = 0; j < COLS; ++j) {
            if (arr[i][j] < 0) {
                countNegatives++;
            }
        }

        std::cout << countNegatives << ' ';
    }

    std::cout << std::endl;
}

void findAndPrintSumPerRow(int arr[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        int rowSum = 0;

        for (int j = 0; j < COLS; ++j) {
            rowSum += arr[i][j];
        }

        std::cout << rowSum << ' ';
    }

    std::cout << std::endl;
}

bool containsElement(int arr[][COLS], int target) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }

    return false;
}

int sumBelowMainDiagonal(int arr[][COLS]) {
    int sum = 0;

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j <= i; ++j) {
            sum += arr[i][j];
        }
    }

    return sum;
}

bool isSymmetric(int arr[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (arr[i][j] != arr[j][i]) {
                return false;
            }
        }
    }

    return true;
}

int main () {
    int matrix[][3] = {	6, 3, 8, 4, 3, -8, 6, 0, 8};

    findAndPrintMinElementPerRow(matrix);
    countNegativeElementsPerRow(matrix);
    findAndPrintSumPerRow(matrix);
    std::cout << containsElement(matrix, 6) << std::endl;
    std::cout << sumBelowMainDiagonal(matrix) << std::endl;
    std::cout << isSymmetric(matrix) << std::endl;
}
