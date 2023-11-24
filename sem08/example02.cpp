#include <iostream>

int main() {
    int *arr3 = new int[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    arr3[10] = 10;
    std::cout << arr3[10];

    // int *arr3 = new int[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    delete[] arr3;
}
