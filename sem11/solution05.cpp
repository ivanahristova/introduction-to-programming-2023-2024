#include <iostream>

// Да се напише функция, която проверява дали в цяло положително число n се съдържа цифра k

// Итеративен вариант
bool containsDigitIter(int n, int k) {
    while (n > 0) {
        int digit = n % 10;
        if (digit == k) {
            return true;
        }
        n /= 10;
    }

    return false;
}

// Рекурсивен вариант
bool containsDigitRec1(int n, int k) {
    if (n % 10 == k) {
        return true;
    }
    if (n == 0) {
        return false;
    }
    return containsDigitRec1(n / 10, k);
}

bool containsDigitRec2(int n, int k) {
    if (n < 10) {
        return n == k;
    }
    return n % 10 == k || containsDigitRec2(n / 10, k);
}

int main() {
    int number = 12345;
    int digitToCheck = 7;
    std::cout << std::boolalpha << containsDigitIter(number, digitToCheck) << ' ';
    std::cout << std::boolalpha << containsDigitRec1(number, digitToCheck) << ' ';
    std::cout << std::boolalpha << containsDigitRec2(number, digitToCheck) << ' ';
}
