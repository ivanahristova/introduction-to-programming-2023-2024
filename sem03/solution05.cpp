#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    if (n < 0) {
        return 1;
    }

    int x = 0, y = 1, z = 0;
    for (int i = 0; i < n; i++) {
        z = x + y;
        x = y;
        y = z;
    }

    std::cout << y << std::endl;
}
