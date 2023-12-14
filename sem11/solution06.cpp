#include <iostream>

// Да се напише функция, която намира броя на цифрите на положително цяло число

// Итеративен вариант
short countDigitsIter(int number) {
    if (number == 0) {
        return 1;
    }

    short count = 0;
    while (number > 0) {
        number /= 10;
        count++;
    }

    return count;
}

// Рекурсивен вариант
// TODO:
//

int main() {
    int number = 123456;
    std::cout << countDigitsIter(number) << ' ';
}
