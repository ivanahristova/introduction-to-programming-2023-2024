#include <iostream>

void merge(int* arr1, int size1, int* arr2, int size2) {
    int size = size1 + size2;
    int* result = new int[size];
    int index1 = 0, index2 = 0, indexResult = 0;

    // arr1 and arr2 are already sorted
    while (index1 < size1 && index2 < size2) {
        if (arr1[index1] <= arr2[index2]) {
            result[indexResult++] = arr1[index1++];
        } else {
            result[indexResult++] = arr2[index2++];
        }
    }

    while (index1 < size1) {
        result[indexResult++] = arr1[index1++];
    }

    while (index2 < size2) {
        result[indexResult++] = arr2[index2++];
    }

    for (int i = 0; i < indexResult; i++) {
        arr1[i] = result[i];
    }

    delete[] result;
}

void mergeSort(int* arr, int n) {
    if (n <= 1) {
        return;
    }

    int mid = n / 2;
    mergeSort(arr, mid); // Левият подмасив е сортиран
    mergeSort(arr + mid, (n - mid)); // Десният подмасив е сортиран
    merge(arr, mid, arr + mid, (n - mid));
}

int main() {

}
