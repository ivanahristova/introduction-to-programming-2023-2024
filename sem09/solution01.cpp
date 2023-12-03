#include <iostream>
#include <cstring>

bool isPalindrome(const char* str) {
    unsigned int length = strlen(str);
    unsigned int mid = length / 2;
    for (size_t i = 0; i < mid; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    unsigned int length;
    std::cin >> length;
    std::cin.ignore();

    char* text = new char[length + 1];
    std::cin.getline(text, length + 1);

    std::cout << isPalindrome(text);

    delete[] text;
}
