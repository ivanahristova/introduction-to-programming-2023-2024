#include <iostream>

int main() {
    int* i = new int;
    std::cout << *i;

    int* j = new int();
    std::cout << *j;
}
