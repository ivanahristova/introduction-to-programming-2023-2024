#include <iostream>

// Да се напише функция, която намира сумата от цифрите на положително цяло число

// Итеративен вариант
int sumDigitsIter(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Рекурсивен вариант
// TODO:
//

int main() {
    int n = 54879;
    std::cout << sumDigitsIter(n) << ' ';
}
