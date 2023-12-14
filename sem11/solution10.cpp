#include <iostream>

// Да се напише функция, която проверява дали редицата а_0, а_1, …, а_{n-1} е монотонно растяща.

// Итеративен вариант
bool isIncreasingSequenceIter(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        if (arr[i - 1] >= arr[i]) {
            return false;
        }
    }
    return true;
}

// Рекурсивен вариант
// TODO:
//

int main() {
    int array[] = {1, 2, 4, 6, 9};
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << std::boolalpha << isIncreasingSequenceIter(array, size) << ' ';
}
