#include <iostream>

int main() {
    short num;
    short minNumber = 32767; // Инициализираме с максимална стойност
    short maxNumber = -32768; // Инициализираме с минимална стойност

    for (int i = 0; i < 5; i++) {
        std::cin >> num;

        if (num < minNumber) {
            minNumber = num; // Актуализираме минимума, ако е по-малко
        } else if (num > maxNumber) {
            maxNumber = num; // Актуализираме максимума, ако е по-голямо
        }
    }

    std::cout << "Min: " << minNumber << std::endl;
    std::cout << "Max: " << maxNumber << std::endl;
}
