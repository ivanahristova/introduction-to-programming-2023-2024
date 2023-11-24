#include <iostream>

int countInversions(int* arr, int n) {
    int inversions = 0;
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
                inversions++;
            }
        }
        if (!swapped) {
            break;
        }
    }

    return inversions;
}

int main() {
    int size = 4;
    int* arr = new int[size]{7, 5, 3, 1};

    std::cout << countInversions(arr, size);

    // Масивът arr вече е сортиран

    delete[] arr;
}
