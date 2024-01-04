#include <iostream>

void generateCombinations(int* nums, int N, int K, int index, int sum) {
    // TODO
}

int main() {
    int N = 5; // Максималната стойност на числата
    int K = 4; // Желана сума

    int* nums = new int[K];
    generateCombinations(nums, N, K, 0, 0);

    delete[] nums;
}
