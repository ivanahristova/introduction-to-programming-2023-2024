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
// TODO:
//


int main() {
    const char* strA = "Prez vakanciqta shte cheta za sesiqta!";
    const char* strB = "cheta";

    std::cout << std::boolalpha << isSubstringIter(strA, strB) << ' ';
}
