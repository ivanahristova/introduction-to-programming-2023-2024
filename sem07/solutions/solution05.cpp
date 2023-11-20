#include <iostream>

int alg3SumCount(const int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size - 2; i++){
        int start = i + 1;
        int end = size - 1;

        int count = 0;
        while (start < end) {
            if (arr[i] + arr[start] + arr[end] == 0) {
                count++;
                start++;
                end--;
            } else if (arr[i] + arr[start] + arr[end] > 0) {
                end--;
            } else if (arr[i] + arr[start] + arr[end] < 0) {
                start++;
            }
        }

        total += count;
    }

    return total;
}

int main() {
    int arr[] = {-4, -2, -1, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int triads = alg3SumCount(arr, n);
    std::cout << triads << std::endl;
}
