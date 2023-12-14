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
// TODO:
//

int main() {
    int num = 12345;
    std::cout << prodDigitsIter(num) << ' ';
}
