#include <iostream>

void example01() {
    int number = 5;
    int* ptrToNumber = &number;// Създаваме променлива от тип указател към int с име ptrToNumber, в която съхраняваме адреса на number

    std::cout << &number << " == " << ptrToNumber << std::endl;

    std::cout << &ptrToNumber << std::endl;

    (*ptrToNumber)++; // приоритетът е важен
    std::cout << number << std::endl;
}

void example02() {
    bool* trickOrTreatWon = nullptr;
    bool treat = true;
    trickOrTreatWon = &treat;
    std::cout << "trickOrTreatWon [" << trickOrTreatWon << "]: " << *trickOrTreatWon << std::endl;

    bool* trickOrTreatLost = trickOrTreatWon; // Двата пойнтъра имат една и съща стойност
    std::cout << "trickOrTreatLost [" << trickOrTreatLost << "]: " << *trickOrTreatLost << std::endl;

    *trickOrTreatWon = false;
    std::cout << "trickOrTreatWon [" << trickOrTreatWon << "]: " << *trickOrTreatWon << std::endl;
    std::cout << "trickOrTreatLost [" << trickOrTreatLost << "]: " << *trickOrTreatLost << std::endl;

    bool trick = true;
    std::cout << "treat [" << &treat << "]: " << treat << std::endl;
    std::cout << "trick [" << &trick << "]: " << trick << std::endl;

    treat = &trickOrTreatLost;
    std::cout << "treat [" << &treat << "]: " << treat << std::endl;
    std::cout << "trick [" << &trick << "]: " << trick << std::endl;

    *trickOrTreatWon = 1;
    std::cout << "trickOrTreatWon [" << trickOrTreatWon << "]: " << *trickOrTreatWon << std::endl;
    std::cout << "trickOrTreatLost [" << trickOrTreatLost << "]: " << *trickOrTreatLost << std::endl;

    *trickOrTreatLost = !(*trickOrTreatWon);
    std::cout << "trickOrTreatWon [" << trickOrTreatWon << "]: " << *trickOrTreatWon << std::endl;
    std::cout << "trickOrTreatLost [" << trickOrTreatLost << "]: " << *trickOrTreatLost << std::endl;
}

void myFunction(int* ptr) {
    std::cout << "Pointer version" << std::endl;
}

void myFunction(int value) {
    std::cout << "Non-pointer version" << std::endl;
}

void example03() {
    myFunction(nullptr);
    myFunction(NULL);
}

int main() {
    // example01();
    // example02();
    // example03();

    // const int a = 5;
    // int const b = 6;

    // std::cout << a << ' ' << b << std::endl;
    // a++;
    // --b;

    // int a = 5;
    // int* ptrToA = &a;

    // NB
    // int a = 5;
    // const int * ptr = &a;

    // int * ptr2 = (int*) ptr;

    // (*ptr)++;
    // (*ptr2)++;

    // std::cout << a;

    // Reference saves space? or not
}
