#include <iostream>

void printArray1(const int arr[], size_t n) {
    for (size_t i = 0; i < n; i++) {
        // std::cout << arr[i];
        std::cout << *(arr + i) << ' ';
    }
    std::cout << std::endl;
}

void printArray2(const int arr[], size_t n) {
    for (size_t i = 0; i < n; i++, arr++) {
        // Използваме указателна аритметика, като инкрементираме указателя
        // за всяка стъпка, за да достъпим следващия елемент в масива.
        std::cout << *arr << " "; // Извеждаме стойността, към която сочи указателя
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]); // Намираме броя на елементите в масива

    printArray1(arr, n);
    printArray2(arr, n);

    return 0;
}
