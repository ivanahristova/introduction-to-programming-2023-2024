#include <iostream>

bool any(const bool arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i]) {
            return true;
        }
    }
    return false;
}

bool all(const bool arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (!arr[i]) {
            return false;
        }
    }
    return true;
}

int findFirst(const bool arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    bool arr[] = {false, false, true, false, true};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << std::boolalpha << any(arr, size) << std::endl;
    std::cout << std::boolalpha << all(arr, size) << std::endl;
    std::cout << findFirst(arr, size);
}
