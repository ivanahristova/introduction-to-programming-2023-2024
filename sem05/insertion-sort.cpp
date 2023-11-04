#include <iostream>

void InsertionSort(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        int key = arr[i];
        int index = i - 1;

        while (index >= 0 && arr[index] > key) {
            arr[index + 1] = arr[index];
            index--;
        }

        if (index != i - 1) {
            arr[index + 1] = key;
        }
    }
}

int main()
{
    const int SIZE = 10;
    int arr[SIZE] = {23, 8, 17, 14, 19, 44, 33, 12, 0, 8};

    InsertionSort(arr, SIZE);

    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}
