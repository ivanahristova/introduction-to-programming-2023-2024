#include <iostream>

int main()
{
    int bound1, bound2;
    std::cin >> bound1 >> bound2;

    int num_count = 0;
    if (bound1 <= bound2) {
        for (int i = bound1; i <= bound2; i++) {
            std::cout << i << " ";

            num_count++;
            if (num_count % 10 == 0) {
                std::cout << std::endl;
            }
        }
    } else {
        for (int i = bound1; i >= bound2; i--) {
            std::cout << i << " ";

            num_count++;
            if (num_count % 10 == 0) {
                std::cout << std::endl;
            }
        }
    }

}
