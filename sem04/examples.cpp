#include <iostream>
#include <cmath>

// Декларация на функция
// double ourSum(double firstNum, double secondNum);

// Дефиниция на функция
double ourSum(double firstNum, double secondNum) {
    double sum = firstNum + secondNum;
    return sum;
}

//
void missingReturnSumPrint(int a, int b) {
    if (a == 0) {
        return;
    }

    std::cout << a + b;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    // 1. n
    // 2. n / 2
    // 3. sqrt(n)
    int limit = sqrt(n);
    // bool numberIsPrime = true;
    for (int i = 2; i < limit; i++) {
        if (n % i == 0) {
            // numberIsPrime = false;
            return 0;
        }
    }

    return 1;
}

int main() {

    double a = 3.4;
    double b = 3.5;

    // double sum = ourSum(a, b);

    missingReturnSumPrint(a, b);

    missingReturnSumPrint(a, b);

    double c = 3;
    double d = 6;

    missingReturnSumPrint(c, d);

    missingReturnSumPrint(a, c);

    return 0;
}

