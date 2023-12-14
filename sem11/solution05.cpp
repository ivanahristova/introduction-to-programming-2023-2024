#include <iostream>

// Да се напише функция, която проверява дали в цяло положително число n съдържа цифра k

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
// TODO:
//

int main() {
    int number = 12345;
    int digitToCheck = 7;
    std::cout << std::boolalpha << containsDigitIter(number, digitToCheck) << ' ';

}
