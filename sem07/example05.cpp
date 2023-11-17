#include <iostream>

int& f(bool b, int& i, int& j) {
  return b ? i : j;
}

int main()
{
    int a, b;

    a = b = 0;
    f(true, a, b) = 7;
    std::cout << a << ' ' << b << std::endl;

    a = b = 0;
    f(false, a, b) = 7;
    std::cout << a << ' ' << b << std::endl;
}
