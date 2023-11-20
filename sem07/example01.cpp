#include <iostream>

double f(double d = 6.0){
    double &e = d;
    e += 7.0;
    return d;
}

int main() {
    std::cout << f() << std::endl; // 13
    std::cout << f(8) << std::endl; // 15
}
