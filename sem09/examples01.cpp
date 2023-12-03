#include <iostream>
#include <cstring>

void example01() {
    char word2[5] = {'H', 'e', 'l', 'l', 'o'};
    std::cout << word2 << std::endl;

    char word1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << word1 << std::endl;
}

void example02() {
    char str0[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << str0 << std::endl; //

    char str1[5] = {'a', 'b', '\0', 'c', 'd'};
    std::cout << str1 << std::endl; // ?
    std::cout << strlen(str1) << std::endl;

    char str2[5] = {'a', 'b'};
    std::cout << str2 << std::endl; // ?

    char str3[7] = {'a', 'a', 'a', 'a', 'a', 'a', 'a'}; //
    std::cout << str3 << std::endl; //

    char str4[7] = "ab"; // '\0'
    std::cout << str4 << std::endl; //

    char str5[100] = "Hello";
    std::cout << str5 << std::endl; // ?

    // char str6[5] = "Hello";
    // std::cout << str6 << std::endl; // ?
}

void print(const char* arr) {
    while (*arr != '\0') {
        std::cout << *arr;
        arr++;
    }
    std::cout << std::endl;
}

void example03() {
    char str1[] = "Hello"; // Автоматично определя големината според дължината на низа
    print(str1);

    const char* str2 = "Hello"; // Указател към константен низ
    print(str2);

    char str3[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Завършва с нулев символ за терминиране на низа
    print(str3);

    const char* ptrToStr4 = str3; // Указател към масив от символи
    print(ptrToStr4);
}

int main() {
    // example01();
    // example02();
    // example03();
}
