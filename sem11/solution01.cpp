#include <iostream>

// Да се напише функция, която намера сумата на числата от 0 до n

// Итеративен вариант
long sumIter(int n) {
    long sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Рекурсивен вариант
// TODO:
//

int main() {
    int n = 10;
    std::cout << sumIter(n) << ' ';
}
