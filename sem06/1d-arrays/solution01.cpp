#include <iostream>

// TODO: implement findMissing

// 1st way
int findMissing1(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    int expectedSum = 0;
    for (int i = 1; i <= size; i++) {
        expectedSum += i;
    }

    return expectedSum - sum;
}

// 2st way
int findMissing2(const int arr[], int size, bool helper[], int sizeHelper) {
    for (int i = 0; i < sizeHelper; i++) {
        helper[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        helper[arr[i]] = true;
    }

    for (int i = 0; i < sizeHelper; i++) {
        if (!helper[i]) {
            return i;
        }
    }

    return -1;
}

int main() {
    const int SIZE = 9;
    int arr[] = {0, 1, 2, 3, 4, 6, 7, 8, 9};

    bool helper[SIZE + 1] = {};

    int missingNumber1 = findMissing1(arr, SIZE);
    int missingNumber2 = findMissing2(arr, SIZE, helper, SIZE + 1);

    std::cout << missingNumber1 << ' ' << missingNumber2;
}
