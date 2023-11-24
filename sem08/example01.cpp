#include <iostream>

int main() {
    int *p(new int(42));
    int *q = p;

    std::cout << *p << std::endl;
    std::cout << *q << std::endl;

    delete p;
    p = nullptr;

    std::cout << *p << std::endl;

    if (p != nullptr) {
        std::cout << *q << std::endl;
    }

    delete q;
}
