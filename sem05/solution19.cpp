#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    int limit = std::sqrt(n);
    for (int i = 2; i <= limit; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int rearrangeArray(int arr[], int size) {
    int primeIdx = 0;

    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            int temp = arr[primeIdx];
            arr[primeIdx] = arr[i];
            arr[i] = temp;
            primeIdx++;
        }
    }

    return primeIdx;
}

int main() {
    int arr[] = {7, 12, 5, 22, 11, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int numPrimes = rearrangeArray(arr, size);
    std::cout << numPrimes << std::endl;

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}
