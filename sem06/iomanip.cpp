#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setbase, std::setw, std::setfill
#include <cmath>        // round, floor, ceil

int main () {

    // setprecision(int n);
    std::setprecision(2);
    double f = 3.14159;
    std::cout << std::setprecision(2) << f << '\n';
    std::cout << std::setprecision(5) << f << '\n';
    std::cout << std::setprecision(6) << f << '\n';
    std::cout << std::setprecision(9) << f << '\n';
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << f << '\n';
    std::cout << std::setprecision(5) << f << '\n';
    std::cout << std::setprecision(6) << f << '\n';
    std::cout << std::setprecision(9) << f << '\n';

    printf("%.2f\n", f);

    // setw
    // setw(int n); - задава широчината на полето при операции за писане
    std::cout << std::setw(10);
    std::cout << 77 << std::endl;

    // setfill
    // setfill(char_type c);
    std::cout << std::setfill('x') << std::setw(10);
    std::cout << 77 << std::endl;

    return 0;
}
