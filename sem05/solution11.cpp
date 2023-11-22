#include <iostream>

const int MAX_SIZE = 100;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printRearrangedArray(int arr[], int size) {
    int sortedArr[MAX_SIZE];
    int result[MAX_SIZE];

    for (int i = 0; i < size; ++i) {
        sortedArr[i] = arr[i];
    }
    sortArray(sortedArr, size);

    int left = 0;
    int right = size - 1;
    int index = 0;

    while (left <= right) {
        if (left == right) {
            result[index++] = sortedArr[left];
            break;
        }

        result[index++] = sortedArr[right--];
        result[index++] = sortedArr[left++];
    }

    for (int i = 0; i < size; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    printRearrangedArray(arr, size);
}
