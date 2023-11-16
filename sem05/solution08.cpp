#include <iostream>

void rearrangeArray(int nums[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
        while (left < right && nums[left] % 2 == 0) {
            left++;
        }

        while (left < right && nums[right] % 2 != 0) {
            right--;
        }

        if (left < right) {
            std::swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr, size);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

}
