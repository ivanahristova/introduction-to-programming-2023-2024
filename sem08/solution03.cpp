#include <iostream>

int* resizeArray(int* arr, unsigned int& size, unsigned int newSize) {
    int* newArray = new int[newSize];

    for (unsigned int i = 0; i < size; ++i) {
        newArray[i] = arr[i];
    }

    delete[] arr;

    size = newSize;

    return newArray;
}

void addElement(int*& arr, unsigned int size, int element) {
    arr = resizeArray(arr, size, size + 1);

    int i = size - 1;
    while (i > 0 && arr[i - 1] > element) {
        arr[i] = arr[i - 1];
        i--;
    }

    arr[i] = element;
}

int main() {
    unsigned int n = 5;
    int* arr = new int[n]{1, 3, 5, 6, 7};

    int newElement = 4;
    addElement(arr, n + 1, newElement);

    for (unsigned int i = 0; i < n + 1; ++i) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
}
