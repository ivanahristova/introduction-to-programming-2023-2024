#include <iostream>

int* readArray(int size) {
    int* arr = new int[size];

    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    return arr;
}

// a)
int* merge(int* arr1, unsigned int n, int* arr2, unsigned int m, unsigned int& mergedSize) {
    unsigned int i1 = 0, i2 = 0, index = 0;
    int* merged = new int[n + m];
    while (i1 < n && i2 < m) {
        if (i1 + 1 < n && arr1[i1] == arr1[i1 + 1]) {
            i1++;
        }
        if (i2 + 1 < m && arr2[i2] == arr2[i2 + 1]) {
            i2++;
        }

        if (arr1[i1] < arr2[i2]) {
            merged[index++] = arr1[i1++];
        } else if (arr2[i2] < arr1[i1]) {
            merged[index++] = arr2[i2++];
        } else {
            i1++;
        }
    }

    while (i1 < n) {
        merged[index++] = arr1[i1++];
    }

    while (i2 < m) {
        merged[index++] = arr2[i2++];
    }

    mergedSize = index;

    return merged;
}

int main() {
    unsigned int n;
    std::cin >> n;
    int* arr1 = readArray(n);

    unsigned int m;
    std::cin >> m;
    int* arr2 = readArray(m);

    unsigned int mergedSize;
    int* merged = merge(arr1, n, arr2, m, mergedSize);

    for (size_t i = 0; i < mergedSize; i++) {
        std::cout << merged[i] << ' ';
    }

    delete[] arr1;
    delete[] arr2;
    delete[] merged;

    return 0;
}
