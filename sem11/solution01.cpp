#include <iostream>

// Да се напише функция, която намера сумата на числата от 0 до n

// Итеративен вариант
long sumIter(int n) {
    long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Рекурсивен вариант
// Version 1
long sumRec(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumRec(n - 1);
}

// Version 2 - Опашкова рекурсия
void sumRec(int n, int& acc) {
    if (n == 0) {
        return;
    }
    acc += n;
    return sumRec(n - 1, acc);
}

int main() {
    int n = 10;
    int accumulator = 0;
    sumRec(n, accumulator);
    std::cout << sumIter(n) << ' ' << sumRec(n) << ' ' << accumulator;
}
