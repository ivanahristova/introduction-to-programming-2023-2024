#include <iostream>

void findCommon(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3) {
    int indexArr1 = 0, indexArr2 = 0, indexArr3 = 0;

    while (indexArr1 < n1 && indexArr2 < n2 && indexArr3 < n3) {
        if (arr1[indexArr1] == arr2[indexArr2] && arr2[indexArr2] == arr3[indexArr3]) {
            std::cout << arr1[indexArr1] << " ";
            indexArr1++;
            indexArr2++;
            indexArr3++;
        } else if (arr1[indexArr1] < arr2[indexArr2]) {
            indexArr1++;
        } else if (arr2[indexArr2] < arr3[indexArr3]) {
            indexArr2++;
        } else {
            indexArr3++;
        }
    }
}

int main()
{
    int arr1[] = { 1, 5, 10, 20, 40, 80 };
    int arr2[] = { 6, 7, 20, 80, 100 };
    int arr3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    findCommon(arr1, arr2, arr3, n1, n2, n3);
    return 0;
}
