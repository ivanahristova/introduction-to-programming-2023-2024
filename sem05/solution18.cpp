#include <iostream>

const int MAX_SIZE = 100;

void sortArray(int arr[], int size) { // insertion sort
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int removeDuplicates(int arr[], int size) {
    int index = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] != arr[index]) {
            arr[++index] = arr[i];
        }
    }

    return index + 1;
}

bool areSameSet(int arr1[], int size1, int arr2[], int size2) {
    sortArray(arr1, size1);
    sortArray(arr2, size2);

    int arr1Size = removeDuplicates(arr1, size1);
    int arr2Size = removeDuplicates(arr2, size2);

    if (arr1Size != arr2Size) {
        return false;
    }

    for (int i = 0; i < arr1Size; ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr1[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size1 = 5;

    int arr2[MAX_SIZE] = {5, 4, 3, 2, 1};
    int size2 = 5;

    int arr3[MAX_SIZE] = {4, 4, 3, 2, 1};
    int size3 = 5;

    std::cout << std::boolalpha << areSameSet(arr1, size1, arr2, size2) << std::endl;
    std::cout << std::boolalpha << areSameSet(arr1, size1, arr3, size3) << std::endl;
}
