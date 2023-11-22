#include <iostream>

const int MAX_SIZE = 100;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int size) { // Selection sort
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

int removeDuplicates(int arr[], int size) {
    int index = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] != arr[index]) {
            arr[++index] = arr[i];
        }
    }

    return index + 1;
}

// Вариант на задачата, в който имаме диапазон за елементите на масива
void printCommonElements1(int arr1[], int size1, int arr2[], int size2) {
    bool found[MAX_SIZE] = {false};

    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (arr1[i] == arr2[j]) {
                found[arr1[i]] = true;
                break;
            }
        }
    }

    for (int i = 0; i < MAX_SIZE; ++i) {
        if (found[i]) {
            std::cout << i << " ";
        }
    }
}

// Вариант на задачата, в който нямаме диапазон за елементите на масива
void printCommonElements2(int arr1[], int size1, int arr2[], int size2) {
    sortArray(arr1, size1);
    sortArray(arr2, size2);

    int arr1Size = removeDuplicates(arr1, size1);
    int arr2Size = removeDuplicates(arr2, size2);

    int indexArr1 = 0;
    int indexArr2 = 0;

    while (indexArr1 < arr1Size && indexArr2 < arr2Size) {
        if (arr1[indexArr1] == arr2[indexArr2]) {
            std::cout << arr1[indexArr1] << ' ';
            indexArr1++;
            indexArr2++;
        } else if (arr1[indexArr1] > arr2[indexArr2]) {
            indexArr2++;
        } else if (arr1[indexArr1] < arr2[indexArr2]) {
            indexArr1++;
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printCommonElements1(arr1, size1, arr2, size2);
    std::cout << std::endl;
    printCommonElements2(arr1, size1, arr2, size2);
}
