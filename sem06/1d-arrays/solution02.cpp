#include <iostream>

// TODO: implement contains

// Линейно обхождаме и проверяваме == X
// bool contains(const int arr[], int size, int X) {

// }

// BinarySearch
bool contains(const int arr[], int size, int X) {
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


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    bool isContained = contains(arr, size, target);

    std::cout << isContained;

}
