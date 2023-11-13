#include <iostream>

bool hasRepeatedDigits(unsigned int number) {
    while (number > 0) {
        short currentDigit = number % 10;
        unsigned int remainingNumber = number / 10;

        while (remainingNumber > 0) { // Сравняваме текущата цифра с всяка цифра, в оставащата част от числото
            int nextDigit = remainingNumber % 10;

            if (currentDigit == nextDigit) {
                return true;
            }

            remainingNumber /= 10;
        }

        number /= 10;
    }

    return false;
}

int main() {
    unsigned int number;

    number = 1234567;
    std::cout << hasRepeatedDigits(number) << std::endl;

    number = 1234562;
    std::cout << hasRepeatedDigits(number) << std::endl;
}
