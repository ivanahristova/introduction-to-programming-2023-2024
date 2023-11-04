#include <iostream>

int countMatchingElements(const int arr1[], const int arr2[], int length) {
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (arr1[i] == arr2[i]) {
            count++;
        }
    }

    return count;
}

int main() {
    int array1[] = {7, 3, -1, 2, 10};
    int array2[] = {1, 3, -3, 2, 11};
    size_t length = sizeof(array1) / sizeof(array1[0]);

    int matchingElements = countMatchingElements(array1, array2, length);

    std::cout << matchingElements << std::endl;
}
