#include <iostream>

// Да се напише функция, която проверява дали елементът x принадлежи на сортирана редицата а_0, а_1, …, а_{n-1}

// Итеративен вариант
bool binarySearchIter(const int arr[], int size, int X) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == X) {
            return true;
        } else if (arr[mid] < X) {
            left = mid + 1;
        } else if (arr[mid] > X) {
            right = mid - 1;
        }
    }

    return false;
}

// Рекурсивен вариант
// TODO:


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 11;

    std::cout << std::boolalpha << binarySearchIter(arr, size, target) << ' ';

}
