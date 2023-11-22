#include <iostream>
#include <stdexcept>

int main() {
    int number;
    std::cin >> number;

    // Ако въведеното число е отрицателно, го преобразуваме в положително
    // това не влияе върху цифрите, но прави обработката по-лесна
    if (number < 0) {
        number *= -1;
    }

    int digitCount[10] = {0}; // Всеки индекс отговаря на цифра от 0 до 9

    while (number > 0) {
        int digit = number % 10;
        digitCount[digit]++; // Брои всяка цифра
        number /= 10;
    }

    for (int i = 0; i < 10; ++i) {
        std::cout << i << ": " << digitCount[i] << std::endl;
    }
}
