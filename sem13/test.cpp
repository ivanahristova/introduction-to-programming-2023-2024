#include <iostream>

int main() {
    int a = 4;
    int b = 2, c = 3;
    switch (a) {
        case 1: a++; break;
        case 2: b++; break;
        case 3: c++; break;
    }

    std::cout << a << ' ' << b << ' ' << c << '\n';
}
