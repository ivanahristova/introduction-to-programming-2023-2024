#include <iostream>

int main() {
    // When is this 0?
    int* i = new int;
    std::cout << *i << std::endl; // 78273991

    int* j = new int();
    std::cout << *j << std::endl; // 0

    int* l = new int{};
    std::cout << *l << std::endl; // 0

    // new -> delete

    delete i;
    delete j;
    delete l;
}
