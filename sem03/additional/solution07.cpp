#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    do {
        std::cout << number % 10;
        number /= 10;
    } while (number != 0);

}
