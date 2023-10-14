#include <iostream>

int main() {

    // 8. Да се прочете от стандартния вход реално число. Да се изведе цялата му част.
    double number;
    std::cin >> number;
    std::cout << (int)number << std::endl;

    // 9. При вход положително цяло число n, да се изведе на конзолата колко секунди има в n дни.
    int days;
    std::cin >> days;
    std::cout << (days * 24 * 60 * 60) << std::endl;
    std::cout << days * 86400 << std::endl;

    // 10. Да се напише програма, която приема две цели числа и извежда тяхното средно аритметично.
    int firstNum, secondNum;
    std::cin >> firstNum >> secondNum;
    double average = (double)firstNum / secondNum;
    // double avg = (firstNum + secondNum) / 2.0;
    std::cout << average << std::endl;

    // 11. Да се напише програма, която прочита 3 цели числа от стандартния вход (a, b, c) и за тях извежда дали е изпълнено:
    // a^2 + b^2 = c^2
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (a * a + b * b == c * c) << std::endl;
    // Дали сумата от последните цифти на числата a и b е равна на c.
    std::cout << (a % 10 + b % 10 == c % 10) << std::endl;

    // 12. По вход малка латиснка буква, главната латинска буква, която й съответства.
    char lowercaseLetter;
    std::cin >> lowercaseLetter;
    // I.
    bool isLowercase = lowercaseLetter >= 'a' && lowercaseLetter <= 'z';
    if (!isLowercase) {
        std::cout << "Invalid input";
    } else {
        std::cout << lowercaseLetter + ('a' - 'A') << std::endl;
    }
    // II.
    int difference = 'a' - 'A';
    char result = lowercaseLetter - difference;
    std::cout << result << std::endl;

    // 13. Да се напише програма, която приема цяло трицифрено число и извежда цифрите му в обратен ред.
    int threeDigitNumber;
    std::cin >> threeDigitNumber;
    if (threeDigitNumber < 100 || threeDigitNumber >= 1000) {
        std::cout << "Your input does not have three digits. Sorry :(" << std::endl;
    } else {
        int thirdDigit = threeDigitNumber % 10;
        int secondDigit = (threeDigitNumber / 10) % 10;
        int firstDigit = threeDigitNumber / 100;

        int reversedNumber = thirdDigit * 100 + secondDigit * 10 + firstDigit;

        std::cout << "Your number reversed is: " << reversedNumber << std::endl;
    }

    // 14. Дадени са координати на 3 точки. Да се провери дали лежат на една права.
    std::cout << "Input coodrinates for point A: ";
    double x1, y1;
    std::cin >> x1 >> y1;

    std::cout << "Input coodrinates for point B: ";
    double x2, y2;
    std::cin >> x2 >> y2;

    std::cout << "Input coodrinates for point C: ";
    double x3, y3;
    std::cin >> x3 >> y3;

    double slopeAB = (y2 - y1) / (x2 - x1); // ъглов коефициент на т. 1 и 2
    double slopeAC = (y3 - y1) / (x3 - x1); // ъглов коефициент на т. 1 и 3

    std::cout << slopeAB << " " << slopeAC << std::endl;
    std::cout << (slopeAB == slopeAC) << std::endl;

    // 15.  Да се напише програма, която при подадена двумерна точка (x, y) под формата на двете и координати x и y
    // да изписва в кой квадрант се намира точката.
    double x, y;
    std::cin >> x >> y;
    if (x == 0 && y == 0) {
        std::cout << "Your point is in the center" << std::endl;
    } else if (x == 0) {
        std::cout << "Your point is on Oy" << std::endl;
    } else if (y == 0) {
        std::cout << "Your point is on Ox" << std::endl;
    } else if (x > 0 && y > 0) {
        std::cout << "I." << std::endl;
    } else if (x > 0 && y < 0) {
        std::cout << "II." << std::endl;
    } else if (x < 0 && y < 0) {
        std::cout << "III." << std::endl;
    } else if (x < 0 && y > 0) {
        std::cout << "IV." << std::endl;
    } else {
        std::cout << "Something went wrong!" << std::endl;
    }

    // 16.  Да се състави прогама, която въвежда три числа и ги изкарва в нарастващ ред.
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    if (num1 >= num2 && num2 >= num3) {
        std::cout << num3 << ' ' << num2 << ' ' << num1 << std::endl;
    } else if (num1 >= num3 && num3 >= num2) {
        std::cout << num2 << ' ' << num3 << ' ' << num1 << std::endl;
    } else if (num2 >= num1 && num1 >= num3) {
        std::cout << num3 << ' ' << num1 << ' ' << num2 << std::endl;
    } else if (num2 >= num3 && num3 >= num1) {
        std::cout << num1 << ' ' << num3 << ' ' << num2 << std::endl;
    } else if (num3 >= num1 && num1 >= num2) {
        std::cout << num2 << ' ' << num1 << ' ' << num3 << std::endl;
    } else if (num3 >= num2 && num2 >= num1) {
        std::cout << num1 << ' ' << num2 << ' ' << num3 << std::endl;
    }

}
