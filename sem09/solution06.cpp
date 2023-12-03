#include <iostream>

int arraySum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void swap(int** matrix, int i, int j) {
    int* temp = matrix[i];
    matrix[i] = matrix[j];
    matrix[j] = temp;
}

void swap(long* matrix, int i, int j) {
    long temp = matrix[i];
    matrix[i] = matrix[j];
    matrix[j] = temp;
}

void swap(size_t* matrix, size_t i, size_t j) {
    size_t temp = matrix[i];
    matrix[i] = matrix[j];
    matrix[j] = temp;
}

void SelectionSort(int** matrix, unsigned int size, long* sums, size_t* sizes) {
    for (unsigned int i = 0; i < size - 1; i++) {
        unsigned int minIndex = i;
        for (unsigned int j = i + 1; j < size; j++) {
            if (sums[j] < sums[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(matrix, i, minIndex);
            swap(sums, i, minIndex);
            swap(sizes, i, minIndex);
        }
    }
}

int main() {
    unsigned int n;
    std::cin >> n;

    int** matrix = new int*[n];
    long* sumArray = new long[n]; // Допълнителен масив за сумите
    size_t* sizesArray = new size_t[n]; // Допълнителен масив за размерностите

    for (unsigned int i = 0; i < n; i++) {
        size_t size;
        std::cin >> size;

        matrix[i] = new int[size];
        for (size_t j = 0; j < size; j++) {
            std::cin >> matrix[i][j];
        }

        sizesArray[i] = size;
        sumArray[i] = arraySum(matrix[i], size);
    }

    SelectionSort(matrix, n, sumArray, sizesArray);

    for (unsigned int i = 0; i < n; i++) {
        for (size_t j = 0; j < sizesArray[i]; j++) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    for (unsigned int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    delete[] sumArray;
    delete[] sizesArray;

    return 0;
}
