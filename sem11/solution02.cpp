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
long powerRec(int x, int n) { // n > 0
    if (n == 0) {
        return 1;
    }

    // if (n == 1) {
    //     return x;
    // }

    return x * powerRec(x, n - 1);
}

// powerRec(x, n, acc = x)

void powerRec(int x, int n, int& acc) {
    if (n == 0) {
        return;
    }

    acc *= x;
    return powerRec(x, n - 1, acc);
}

int main() {
    int n = 10;
    int x = 5;
    int accumulator = 1;
    powerRec(n, x, accumulator);
    std::cout << powerIter(n, x) << ' ' << powerRec(n, x) << ' ' << accumulator;
}
