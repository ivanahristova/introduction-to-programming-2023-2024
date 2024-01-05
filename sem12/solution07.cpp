#include <iostream>

void generateCombinations(int* nums, int N, int K, int index, int sum) {
    if (sum == K) {
        for (int i = 0; i < index; ++i) {
            std::cout << nums[i] << " ";
        }
        std::cout << std::endl;
        return;
    }

    for (int i = 1; i <= N; ++i) {
        if (sum + i <= K) {
            nums[index] = i;
            generateCombinations(nums, N, K, index + 1, sum + i);
        }
    }
}

int main() {
    int N = 5; // Максималната стойност на числата
    int K = 4; // Желана сума

    int* nums = new int[K];
    generateCombinations(nums, N, K, 0, 0);

    delete[] nums;
}
