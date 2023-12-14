#include <iostream>

// Да се напише функция, която проверява дали елементът x принадлежи на редицата а_0, а_1, …, а_{n-1}

// Итеративен вариант
bool findElementIter(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

// Рекурсивен вариант
// TODO:
//


int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int element = 6;

    std::cout << std::boolalpha << findElementIter(array, size, element) << ' ';
}
