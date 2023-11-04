#include <iostream>

bool isTernarySequence(const int numbers[], size_t length) {
    if (length <= 1) {
        return true;
    }

    if (length == 2) {
        return numbers[0] != numbers[1];
    }

    for (size_t i = 1; i < length - 1; i++) {
        if (!((numbers[i] > numbers[i - 1] && numbers[i] > numbers[i + 1])
            || (numbers[i] < numbers[i - 1] && numbers[i] < numbers[i + 1]))) {
            return false;
        }
    }
    return true;
}

int main() {
    // int numbers[] = {1, 2, 2};
    // int numbers[] = {1, 3, 2, 6, 4, 7, 2, 3, 1, 9};
    // int numbers[] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    // int numbers[] = {1, 6, 2, 3, 1, 7, 2, 3, 1, 9};
    int numbers[] = {15, 10, 15, 12, 18, 13, 20, 17, 22, 14, 25};

    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    bool isTernary = isTernarySequence(numbers, length);

    std::cout << isTernary << std::endl;
}
