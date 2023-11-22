#include <iostream>

bool containsAllDigits(long long num) {
    int digitCount[10] = {0};

    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    int occurringDigitsCount = 0;
    for (int i = 0; i < 10; ++i) {
        if (digitCount[i] > 0) {
            occurringDigitsCount++;
        }
    }

    return (occurringDigitsCount == 10);
}

int main() {
    long long number;
    std::cin >> number;

    std::cout << std::boolalpha << containsAllDigits(number);
}
