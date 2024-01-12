#include <iostream>

int main() {
    int a = 3, b = 4;
    bool c = ++a == b++;
    std::cout << c << std::endl;
    return 0;
}

