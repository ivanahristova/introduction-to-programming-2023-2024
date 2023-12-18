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
void countDigitsRec(int num, int& counter) {
    if (num < 10) {
        counter++;
        return;
    }
    counter++;
    countDigitsRec(num / 10, counter);
}

int countDigitsRec(int num) {
    if (num < 10) {
        return 1;
    }
    return 1 + countDigitsRec(num / 10);
}

int main() {
    int number = 123456;
    std::cout << countDigitsIter(number) << ' ';
    std::cout << countDigitsRec(number) << ' ';
    int acc = 0;
    countDigitsRec(number, acc);
    std::cout << acc;
}
