#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int opposite = ~number + 1;

    std::cout << opposite;
}
