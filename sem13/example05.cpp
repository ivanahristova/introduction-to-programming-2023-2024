#include <iostream>

int main() {
    int a = 3, b = a;
    a++;
    ++b;
    bool c = a == b;
    std::cout << c << std::endl;
    return 0;
}

