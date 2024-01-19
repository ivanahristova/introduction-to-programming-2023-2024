#include <iostream>

int findWater(int arr[], int n) {
    int* left = new int[n];
    int* right = new int[n];
    int water = 0;

    left[0] = arr[0];
    for (int i = 1; i < n; i++) {
        left[i] = std::max(left[i - 1], arr[i]);
    }

    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right[i] = std::max(right[i + 1], arr[i]);
    }

    for (int i = 1; i < n - 1; i++) {
        int ithBarWater = std::min(left[i - 1], right[i + 1]);
        if (ithBarWater > arr[i]) {
            water += ithBarWater - arr[i];
        }
    }

    return water;
}

int main() {
    int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << findWater(arr, n);
    return 0;
}
