#include <iostream>

// Да се напише функция, която намира сумата от цифрите на положително цяло число

// Итеративен вариант
int sumDigitsIter(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Рекурсивен вариант
int sumDigitsRec(int n) {
    if (n < 10) {
        return n;
    }

    int lastDigit = n % 10;
    int sumRestDigits = sumDigitsRec(n / 10);

    return lastDigit + sumRestDigits;
}

// Опашкова рекурсия
// TODO: HW

int main() {
    int n = 54879;
    std::cout << sumDigitsIter(n) << ' ';
}
