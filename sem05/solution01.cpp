#include <iostream>

// Функция за размяна на стойностите на две променливи
void swapValues(int* a, int* b) {
    int temp = *a; // Запазваме стойността на a във временна променлива
    *a = *b;       // Присвояваме на a стойността на b
    *b = temp;     // Присвояваме на b стойността, която сме запазили в temp
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "x = " << x << ", y = " << y << std::endl;

    swapValues(&x, &y);

    std::cout << "x = " << x << ", y = " << y << std::endl;

    return 0;
}
