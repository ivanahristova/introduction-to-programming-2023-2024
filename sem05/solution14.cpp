#include <iostream>

int mostFrequentDigit(long long num) {
    int digitCount[10] = {0};
    int maxOccurrences = 0;
    int mostFrequent = -1;

    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; ++i) {
        if (digitCount[i] > maxOccurrences) {
            maxOccurrences = digitCount[i];
            mostFrequent = i;
        }
    }

    return mostFrequent;
}

int main() {
    long long number;
    std::cin >> number;

    std::cout << mostFrequentDigit(number);
}
