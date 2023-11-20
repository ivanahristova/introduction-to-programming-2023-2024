#include <iostream>

const int MAX = 100;

bool isPalindrome(const char arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool isMagicPalindrome(char matrix[][MAX], int size) {
    for (int i = 0; i < size; ++i) {
        char row[MAX], col[MAX];
        for (int j = 0; j < size; ++j) {
            row[j] = matrix[i][j];
            col[j] = matrix[j][i];
        }
        row[size] = '\0';
        col[size] = '\0';

        if (!isPalindrome(row, size) || !isPalindrome(col, size)) {
            return false;
        }
    }

    char mainDiagonal[MAX];
    for (int i = 0; i < size; ++i) {
        mainDiagonal[i] = matrix[i][i];
    }
    mainDiagonal[size] = '\0';

    if (!isPalindrome(mainDiagonal, size)) {
        return false;
    }

    char secondaryDiagonal[MAX];
    for (int i = 0; i < size; ++i) {
        secondaryDiagonal[i] = matrix[i][size - 1 - i];
    }
    secondaryDiagonal[size] = '\0';

    if (!isPalindrome(secondaryDiagonal, size)) {
        return false;
    }

    return true;
}

int main() {
    int size;
    std::cin >> size;

    char matrix[MAX][MAX];
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << isMagicPalindrome(matrix, size);
}
