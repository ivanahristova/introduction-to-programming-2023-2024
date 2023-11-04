#include <iostream>

void printLongestRepeatingSequenceDetails(const int arr[], size_t length) {
    int maxStartIndex = 0, currentStartIndex = 0;
    int maxLength = 0, currentLength = 1;

    for (size_t i = 1; i < length; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;

            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = currentStartIndex;
            }
        } else {
            currentStartIndex = i;
            currentLength = 1;
        }
    }

    std::cout << "Index: " << maxStartIndex << std::endl;
    std::cout << "Length: " << maxLength << std::endl;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 6, 6, 6};
    size_t length = sizeof(arr) / sizeof(arr[0]);

    printLongestRepeatingSequenceDetails(arr, length);
}
