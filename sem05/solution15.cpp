#include <iostream>

void moveZeros(int arr[], int n) {
    int nonZeroIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex++] = arr[i];
        }
    }

    while (nonZeroIndex < n) {
        arr[nonZeroIndex++] = 0;
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {0, 1, 0, 2, 0, 3, 6, 0, 5, 0};

    moveZeros(arr, SIZE);

    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << ' ';
    }
}
