#include <iostream>

double minOfArray(const double arr[], int size) {
    double minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

double maxOfArray(const double arr[], int size) {
    double maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

double sumOfArray(const double arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

double productOfArray(const double arr[], int size) {
    double product = 1.0;
    for (int i = 0; i < size; ++i) {
        product *= arr[i];
    }
    return product;
}

int main() {
    double arr[] = {2.5, 6.7, 1.2, 9.8, 5.4};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << minOfArray(arr, size) << std::endl;
    std::cout << maxOfArray(arr, size) << std::endl;
    std::cout << sumOfArray(arr, size) << std::endl;
    std::cout << productOfArray(arr, size) << std::endl;
}
