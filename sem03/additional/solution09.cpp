#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int previous, current;
    std::cin >> previous;

    for (int i = 1; i < n; ++i) {
        std::cin >> current;

        if (current == previous) {
            std::cout << "yes";
            return 0;
        }

        previous = current;
    }

    std::cout << "no";
}
