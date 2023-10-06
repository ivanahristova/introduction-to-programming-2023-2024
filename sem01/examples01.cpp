#include <iostream>

int main()
{

    int num; // Декларация на променлива (казваме, че съществува)
    num = 5; // Инициализация на променлива (даваме й стойност)
    std::cout << "num: " << num << std::endl;
    num = 10; // Присвояване на стойност 10 на променливата num
    std::cout << "num: " << num << std::endl;

    // Създаваме нов блок - променливите, декларирани в него са видими от декларацията им до края на блока
    { // Начало на блока
        int a = 5;
        std::cout << "a: " << a << std::endl;
    } // Край на блока

    // Променливата a, създадена в горния блок вече не съществува.
    // При опит за компилация без коментар на долния ред ще получим грешка: 'a' was not declared in this scope
    // std::cout << "a: " << a << std::endl;

    char a = 'a'; // Променлива от символен тип
    std::cout << "a: " << a << std::endl;

    char lowercaseA = 97; // На всяка променлива от символен тип отговаря конкретна целочислена стойност.
    std::cout << "lowercaseA: " << lowercaseA << std::endl;

    bool iAmAStudent = true; // Променлива от булев тип. Може да приема стойности лъжа или истина (0/1).
    std::cout << "iAmAStudent: " << iAmAStudent << std::endl;

    // Реалните числа в компютъра се представят с техни рационални апроксимации
    double realNumD = 0.5; // Дробно число с по-голяма прецизност
    std::cout << "Size of realNumD: " << sizeof(realNumD) << std::endl;
    std::cout << "realNumD: " << realNumD << std::endl;
    float realNumF = 14.5f; // Дробно число с по-малка прецизност
    std::cout << "Size of realNumF: " << sizeof(realNumF) << std::endl;
    std::cout << "realNumF: " << realNumF << std::endl;
    float realNumF2 = 14.5;
    std::cout << "Size of realNumF2: " << sizeof(realNumF2) << std::endl;
    std::cout << "realNumF2: " << realNumF2 << std::endl;

    // sizeof е оператор, който връща размера на обект или тип
    std::cout << "Size of short: " << sizeof(short) << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of long: " << sizeof(long) << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << std::endl;

}
