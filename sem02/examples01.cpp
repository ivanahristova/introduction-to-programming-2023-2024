#include <iostream>

int main() {

    char uppercaseLetter = 'A';

    int valueInt;
    valueInt = (int)uppercaseLetter;
    std::cout << uppercaseLetter << ' ' << valueInt << std::endl;

    float valueFloat;
    valueFloat = float(uppercaseLetter) / 2;
    std::cout << uppercaseLetter << ' ' << valueFloat << std::endl;

    double num = 5.5;
    std::cout << num << std::endl;
    int castNum = static_cast <int> (num);
    std::cout << castNum << std::endl;

    // Ще предизвика грешка, защото ще се промени размера на паметта, която се 'сочи'.
    // int* ptr = static_cast <int*> (&uppercaseLetter);
    // std::cout << *ptr;

    char c1 = 97;
    char c2 = 97;
    char c3 = c1 + c2;
    std::cout << (int)c2 << " + " << (int)c2 << " = " << (int)c3 << std::endl;
    int result = c1 + c1;
    std::cout << result << std::endl;

    int x = 3;
    int leftShiftResult = x << 2;
    std::cout << leftShiftResult << std::endl;

    x = 5;
    int rr = x >> 2;
    std::cout << rr << std::endl;

    char n = 'n'; // литерал
    char nn = '\n'; // спициален символ
    char t = '\t';
    char d = '\\';

    long a = 5;
    short b = 5;

    // check
    long var = (a & b);
    std::cout << var << std::endl;

    return 0;
}
