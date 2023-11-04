#include <iostream>

long long countInversions1(int arr[], size_t n) {
    long long inversions = 0;

    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inversions++;
            }
        }
    }

    return inversions;
}

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    long long inversions = countInversions1(arr, n);

    std::cout << inversions << std::endl;
}
