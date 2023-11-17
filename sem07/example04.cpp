#include <iostream>
#include <iomanip>

int& f(bool b){
    int i = 5, j = 10;

    std::cout << i << ' ' << j << std::endl;

    return b ? i : j;
}

int& g(bool b){
    static int i = 5, j = 10;

    std::cout << i << ' ' << j << std::endl;

    return b ? i : j;
}

int main()
{
    std::cout << std::setfill('-') << std::setw(10) << "Calling function f:" << std::endl;
    f(true) = 15;
    f(false) = 20;
    f(true) = 25;

    std::cout << std::setfill('-') << std::setw(10) << "Calling function g:" << std::endl;
    g(true) = 15;
    g(false) = 20;
    g(true) = 25;
}
