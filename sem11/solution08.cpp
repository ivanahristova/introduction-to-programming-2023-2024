#include <iostream>

// Да се напише функция, която обръща цяло положително число

// Итеративен вариант
int reverseNumberIter(int number) {
    int reversed = 0;
    while (number > 0) {
        reversed *= 10;
        reversed += number % 10;
        number /= 10;
    }
    return reversed;
}

// Рекурсивен вариант
int reverseNumberRec(int number, int reversed = 0) {
    if (number == 0) {
        return reversed;
    }
    int lastDigit = number % 10;
    reversed = (reversed * 10) + lastDigit;
    return reverseNumberRec(number / 10, reversed);
}


int main() {
    int number = 456789;
    std::cout << reverseNumberIter(number);
    std::cout << std::endl;
    std::cout << reverseNumberRec(number);
}
