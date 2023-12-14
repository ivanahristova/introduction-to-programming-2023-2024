#include <iostream>

// Да се напише функция, която повдига число на степен n

// Итеративен вариант
long powerIter(int x, int n) {
    long result = 1;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

// Рекурсивен вариант
// TODO:
//

int main() {
    int n = 10;
    int x = 5;
    std::cout << powerIter(n, x) << ' ';
}
