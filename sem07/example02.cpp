#include <iostream>

void g(){
    int number = 0;
    int& ref = number;
    ref++;
    std::cout << number << std::endl;
    std::cout << ref << std::endl;

    int* ptr = &ref;
    (*ptr)++;
    std::cout << number  << std::endl;

    ptr++;
    std::cout << *ptr << std::endl;
    ptr--;
    std::cout << *ptr << std::endl;
}

int main() {
    g();
}
