#include <iostream>

void generatePermutations(int* nums, int N, int start) {
    // TODO
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
