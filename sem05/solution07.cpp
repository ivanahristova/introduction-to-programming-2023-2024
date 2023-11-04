#include <iostream>

long long sumOfEvenElements(const int arr[], size_t length) {
    long long sum = 0;

    for (size_t i = 0; i < length; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t length = sizeof(arr) / sizeof(arr[0]);

    long long sum = sumOfEvenElements(arr, length);

    std::cout << "Sum: " << sum << std::endl;
}
