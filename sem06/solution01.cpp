#include <iostream>

// TODO: implement findMissing

int main() {
    const int SIZE = 9;
    int arr[] = {0, 1, 2, 3, 4, 6, 7, 8, 9};

    int missingNumber = findMissing(arr, SIZE);

    std::cout << missingNumber;
}
