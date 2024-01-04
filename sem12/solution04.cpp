#include <iostream>
#include <cstring>

// Да се дефинира функция, която приема низ A и низ B и проверява дали низ B се съдържа в низ А.

// Итеративен вариант
bool isSubstringIter(const char* A, const char* B) {
    int lenA = strlen(A);
    int lenB = strlen(B);

    int bound = lenA - lenB;
    for (int i = 0; i <= bound; ++i) {
        int j;
        for (j = 0; j < lenB; ++j) {
            if (A[i + j] != B[j]) {
                break;
            }
        }
        if (j == lenB) {
            return true;
        }
    }
    return false;
}

// Рекурсивен вариант
bool isSubstringRec(const char* A, const char* B, int indexA = 0, int indexB = 0) {
    if (B[indexB] == '\0') {
        return true;
    }

    if (A[indexA] == '\0') {
        return false;
    }

    if (A[indexA] == B[indexB]) {
        return isSubstringRec(A, B, indexA + 1, indexB + 1);
    } else {
        return isSubstringRec(A, B, indexA + 1, 0);
    }
}

int main() {
    const char* strA = "Prez vakanciqta shte cheta za sesiqta!";
    const char* strB = "cheta";

    std::cout << std::boolalpha << isSubstringIter(strA, strB) << ' ' << isSubstringRec(strA, strB);
}
