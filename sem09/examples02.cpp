#include <iostream>

void example01() {
    const int maxLength = 10;
    char input[maxLength];
    std::cin >> input; // Чете низ до интервал или нов ред (може да причини препълване на буфера)
    std::cout << input << std::endl;
}

void example02() {
    const int maxLength = 10;
    char input[maxLength];
    std::cin.getline(input, maxLength);
    std::cout << input << std::endl;
}

void example03() {
    char c;
    c = std::cin.get();
    std::cout << c << std::endl;
}

void example04() {
    char c;
    std::cin >> c;

    const int maxLength = 10;
    char input1[maxLength];
    std::cin.getline(input1, maxLength, ' ');

    std::cout << c << std::endl;
    std::cout << input1 << std::endl;
}

int main() {
    // example01();

    // example02();

    // example03();

    example04();
}
