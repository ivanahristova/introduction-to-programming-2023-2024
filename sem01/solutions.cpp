#include <iostream>

int main() {

    // 1. Да се декларира променлива от произволен целочислен тип.
    int number1;
    std::cout << number1 << std::endl; // Променливата не е инициализирана. Стойността й е недефенирана.

    // 2. Да се декларира и инициализира променлива от същия тип с подходяща стойност.
    int number2 = 5;

    // 3. Да се присвои стойността на втората променлива върху първата.
    number1 = number2;
    std::cout << number1 << std::endl;

    // 4. Да се намери разликата на две целочислени числа и да се запази в променлива с име result.
    int result = number1 - number2;
    std::cout << result << std::endl;

    // 5. (*) Да се намери абсолютната разлика на две целочислени числа и да се запази в променлива с име absoluteResult.
    int five = 5;
    int two = 2;
    int difference = two - five;
    std::cout << difference << std::endl;
    int absoluteResult = std::abs(difference);
    std::cout << absoluteResult << std::endl;

    // 6. Да се намери произведението на две целочислени числа.
    int product = number1 * number2;
    std::cout << product << std::endl;

    // Има проблем с възможно преливане (overflow) когато числата са големи
    int bigNum1Int = 100000;
    int bigNum2Int = 100000;
    int resWrong = bigNum1Int * bigNum2Int;
    std::cout << resWrong << std::endl;

    // Не е достатъчно типа на резултата да бъде променен
    long resLong = bigNum1Int * bigNum2Int;
    std::cout << resLong << std::endl;

    long resLongLong = bigNum1Int * bigNum2Int;
    std::cout << resLongLong << std::endl;

    // Решение 1: Поне едното число се декларира от тип с по-голям диапазон от възможни стойности
    long long bigNum1 = 100000;
    int bigNum2 = 100000;
    long long resultLongInt = bigNum1 * bigNum2;
    std::cout << resultLongInt << std::endl;

    // Решение 2: Поне едното число да се преобразува до тип с по-голям диапазон от възможни стойности
    long long resultWithCast = (long long)bigNum1Int * bigNum2;
    std::cout << resultWithCast << std::endl;

    // Решение 3: Изкуствено умножение с неутралната стойност относно умножението, присвоена на подходящия тип
    long long resultWithProdLast = bigNum1Int * bigNum2Int * 1LL; // Умножението на първите две числа се извършва първо
    std::cout << resultWithProdLast << std::endl;

    long long resultWithProdMid = bigNum1Int * 1LL * bigNum2Int; // Редът в умножението има значение
    std::cout << resultWithProdMid << std::endl;

    // 7. Да се инициализират 3 променливи с произволни стойности. Всяка от тях да се инкрементира с единица и да се принитира старата й стойност.
    short var1 = 10;
    short var2 = 8;
    short var3 = 15;
    std::cout << var1++ << ' ' << var2++ << ' ' << var3++ << std::endl;

    // 8. Да се инициализират 3 променливи с произволни стойности. Всяка от тях да се декрементира с единица и да се принтира новата й стойност.
    short var4 = 10;
    short var5 = 8;
    short var6 = 15;
    std::cout << --var4 << ' ' << --var5 << ' ' << --var6 << std::endl;

    // 9. Да се инициализират променливи със стойностите (65, истина, 'А', 65.0).
    int a = 65;
	bool b = true;
	char c = 'A';
	double d = 65.0;
    std::cout << a << ' ' << b << ' ' << c << ' ' << d << std::endl;

    // 10.  Дадена е променлива от тип int със стойност 67. Какъв ще бъде резултата от присвояването й върху променливи от булев, символен и тип с плаваща запетая.
    int a1 = 67;
	bool b1 = a1;
	char c1 = a1;
	double d1 = a1;
    std::cout << a1 << ' ' << b1 << ' ' << c1 << ' ' << d1 << std::endl;

    // 11.   Да се определи какво ще изведе:
    int a2, b2, c2, d2, e2, f2;
    std::cout << (a2 = b2 = c2 = d2 = e2 = f2 = 5) << std::endl;
    std::cout << a2 << ' ' << b2 << ' ' << c2 << ' ' << d2 << ' ' << e2 << ' ' << f2 << std::endl;

    // 12. Да се инициализира променлива от целочислен тип. Да се увеличи стойността й с 5 и да се изведе на екрана.
    long initialValue = 100;
    std::cout << (initialValue += 5) << std::endl;

    // 13. Да се инициализират две променливи с произолни реални стойности. Да се изведе резултатът от проверката им за
    //     - по-малко,
    //     - по-голямо,
    //     - равенство
    // с подходящи съобщения
    double realNum1 = 1.0;
    double realNum2 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
    bool firstIsBigger = realNum1 > realNum2;
    bool firstIsSmaller = realNum1 < realNum2;
    bool areEqual = realNum1 == realNum2;
    std::cout << "First number > Second number: " << firstIsBigger << std::endl;
    std::cout << "First number < Second number: " << firstIsSmaller << std::endl;
    std::cout << "First number == Second number: " << areEqual << std::endl;

    double eps = 0.000001;
    bool areEqualComp = std::abs(realNum1 - realNum2) < eps;
    std::cout << "First number == Second number: " << areEqualComp << std::endl;

    // 14. Да се прочете целочислено число от стандартния вход.
    //     - Да се изведе последната му цифра
    //     - Да се изведе дали е четно или нечетно
    int myNumber;
    std::cin >> myNumber;
    short lastDigit = myNumber % 10;
    std::cout << "Last digit: " << lastDigit << std::endl;
    bool isEven = (myNumber % 2) == 0;
    std::cout << "Number is even: " << isEven << std::endl;

    // 15. Да се прочете символ от стандартния вход.
    //     - Да се изведе дали символът е малка латинска буква.
    //     - Да се изведе дали символът е главна латиснка буква.
    char symbol;
    std::cin >> symbol;
    bool isLowercaseLatinLetter = (symbol >= 'a' && symbol <= 'z');
    bool isCapitalLatinLetter = (symbol >= 'A' && symbol <= 'Z');
    std::cout << "Is a lowercase latin letter: " << isLowercaseLatinLetter << std::endl;
    std::cout << "Is a capital latin letter: " << isCapitalLatinLetter << std::endl;
}
