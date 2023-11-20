#include <iostream>

const int MAX = 100; // Максимален размер на матриците

void matrixMultiplication(int A[][MAX], int B[][MAX], int N, int M, int P, int Q) {
    if (M != P) {
        return;
    }

    int result[MAX][MAX];

    // Инициализиране на матрицата за резултата със стойности 0
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < Q; ++j) {
            result[i][j] = 0;
        }
    }

    // Умножение на матриците A и B
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < Q; ++j) {
            for (int k = 0; k < M; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Извеждане на резултата от умножението
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < Q; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int N, M, P, Q;

    std::cout << "(NxM): ";
    std::cin >> N >> M;

    std::cout << "(PxQ): ";
    std::cin >> P >> Q;

    if (M != P) {
        std::cout << "No" << std::endl;
        return 1;
    }

    int A[MAX][MAX], B[MAX][MAX];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> A[i][j];
        }
    }

    for (int i = 0; i < P; ++i) {
        for (int j = 0; j < Q; ++j) {
            std::cin >> B[i][j];
        }
    }

    matrixMultiplication(A, B, N, M, P, Q);

    return 0;
}
