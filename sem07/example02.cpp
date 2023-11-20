#include <iostream>

void g(){
    int number = 0;  //
    int& ref = number; //
    ref++; // 1
    std::cout << number << std::endl;
    std::cout << ref << std::endl;

    int* ptr = &ref;
    (*ptr)++; // 2
    std::cout << number  << std::endl;

    ptr++; // pointer arithmetic
    std::cout << *ptr << std::endl;
    ptr--; //
    std::cout << *ptr << std::endl;
}

int main() {
    g();
}
