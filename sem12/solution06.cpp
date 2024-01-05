#include <iostream>

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void generatePermutations(int* nums, int N, int start) {
    if (start == N - 1) {
        for (int i = 0; i < N; ++i) {
            std::cout << nums[i] << " ";
        }
        std::cout << std::endl;
        return;
    }

    for (int i = start; i < N; ++i) {
        swap(&nums[start], &nums[i]);
        generatePermutations(nums, N, start + 1);
        swap(&nums[start], &nums[i]); // Backtrack
    }
}

int main() {
    int N = 3;
    int* nums = new int[N];
    for (int i = 0; i < N; ++i) {
        nums[i] = i + 1;
    }

    generatePermutations(nums, N, 0);

    delete[] nums;
}
