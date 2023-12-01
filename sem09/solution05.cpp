#include <iostream>
#include <cstring>
#include <stdexcept>

int atoi(const char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    while (isspace(str[i])) { // Прескачане на началните интервали, ако има такива
        i++;
    }

    if (str[i] == '-') {     // Определяне на знака (+ или -)
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (isdigit(str[i])) { // Преобразуване на символите до достигане на некоректен символ
        result = result * 10 + (str[i] - '0');
        i++;
    }

    while (isspace(str[i])) { // Проверка за некоректни символи след числото
        i++;
    }
    if (str[i] != '\0') {
        throw std::invalid_argument("Invalid input: Not a valid number.");
    }

    return result * sign;
}

int main() {
    const char* numStr = "12345";

    try {
        int number = atoi(numStr);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}
