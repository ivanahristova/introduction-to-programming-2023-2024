#include <iostream>

// TODO: implement contains

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    bool isContained = contains(arr, size, target);

    std::cout << isContained;

}
