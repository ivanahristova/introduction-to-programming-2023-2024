#include <iostream>

// Да се напише функция, която извежда цяло положително число в обратен ред

// Итеративен вариант
void printBackwardsIter(int number) {
    while (number > 0) {
        short digit = number % 10;
        std::cout << digit;
        number /= 10;
    }
}

// Рекурсивен вариант
void printBackwardsRec(int number) {
    if (number > 0) {
        short digit = number % 10;
        std::cout << digit;
        printBackwardsRec(number / 10);
    }
}

int main() {
    int number = 456789;
    printBackwardsIter(number);
    std::cout << std::endl;
    printBackwardsRec(number);
}
