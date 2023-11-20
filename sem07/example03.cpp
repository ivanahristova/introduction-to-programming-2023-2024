#include <iostream>

int& getNumber(int b) {
    int stepUp = b + 1;
    int stepDown = b - 1;
    return b % 2 == 0 ? stepUp : stepDown;
}

int main() {
    std::cout << getNumber(10) << std::endl; // 11
    std::cout << getNumber(11) << std::endl; // 10
}
