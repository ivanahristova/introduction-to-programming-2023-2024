#include <iostream>

// Да се напише функция, която намира произведението на цифрите на положително цяло число

// Итеративен вариант
long prodDigitsIter(int number) {
    long product = 1;
    while (number > 0) {
        int digit = number % 10;
        product *= digit;
        number /= 10;
    }
    return product;
}

// Рекурсивен вариант
long prodDigitsRec(int number) {
    if (number == 0) {
        return 1;
    }

    int digit = number % 10;
    long product = prodDigitsRec(number / 10);
    return product * digit;
}


int main() {
    int num = 12345;
    std::cout << prodDigitsIter(num) << ' ';
    std::cout << prodDigitsRec(num) << ' ';
}
