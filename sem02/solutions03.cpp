#include <iostream>
#include <cmath>

int main() {

    // 17.  Да се напише програма, която при подадено целочислено число изписва името на месеца,
    // съответстващ на това число. В случай, че числото не е валиден месец, да се изведе "Invalid month"
    int month;
    std::cout << "Enter a month: ";
    std::cin >> month;

    if (month == 1) {
        std::cout << "The month is: January\n";
    } else if (month == 2) {
        std::cout << "The month is: February\n";
    } else if (month == 3) {
        std::cout << "The month is: March\n";
    } else if (month == 4) {
        std::cout << "The month is: April\n";
    } else if (month == 5) {
        std::cout << "The month is: May\n";
    } else if (month == 6) {
        std::cout << "The month is: June\n";
    } else if (month == 7) {
        std::cout << "The month is: July\n";
    } else if (month == 8) {
        std::cout << "The month is: August\n";
    } else if (month == 9) {
        std::cout << "The month is: September\n";
    } else if (month == 10) {
        std::cout << "The month is: October\n";
    } else if (month == 11) {
        std::cout << "The month is: November\n";
    } else if (month == 12) {
        std::cout << "The month is: December\n";
    } else {
        std::cout << "Invalid month\n";
    }

    // 18.  Да се напише програма, която при въведен символ от клавиатурата изписва
    //     • "lowercase letter" - ако е малка латинска буква
    //     • "uppercase letter" - ако е голяма латинска буква
    //     • "digit" - ако е цифра
    //     • "other" - иначе
    char symbol;
    std::cout << "Enter a symbol: ";
    std::cin >> symbol;

    if (symbol >= 'a' && symbol <= 'z') {
        std::cout << "lowercase letter" << std::endl;
    } else if (symbol >= 'A' && symbol <= 'Z') {
        std::cout << "uppercase letter" << std::endl;
    } else if (symbol >= '0' && symbol <= '9') {
        std::cout << "digit" << std::endl;
    } else {
        std::cout << "other" << std::endl;
    }

    // 19.  Да се напише програма, която при въведени от клавиатурата 3 оценки извежда средната оценка заедно с оценката в текстов формат в зависимост от това в кой интервал попада.
    //     • [2, 3) - Poor
    //     • [3, 3.5) - Average
    //     • [3.5, 4.5) - Good
    //     • [4.5, 5.5) - Very Good
    //     • [5.5, 6] - Excellent
    double grade1, grade2, grade3;
    std::cin >> grade1 >> grade2 >> grade3;

    double average = (grade1 + grade2 + grade3) / 3;
    if (average >= 2.0 && average < 3.0) {
        std::cout << "Average grade: " << average << " (Poor)" << std::endl;
    } else if (average >= 3.0 && average < 3.5) {
        std::cout << "Average grade: " << average << " (Average)" << std::endl;
    } else if (average >= 3.5 && average < 4.5) {
        std::cout << "Average grade: " << average << " (Good)" << std::endl;
    } else if (average >= 4.5 && average < 5.5) {
        std::cout << "Average grade: " << average << " (Very Good)" << std::endl;
    } else if (average >= 5.5 && average <= 6.0) {
        std::cout << "Average grade: " << average << " (Excellent)" << std::endl;
    } else {
        std::cout << "Invalid average" << std::endl;
    }

    // 21. Да се напише програма, която при подадени радиус r и двумерна точка (х, у) проверява дали точката се намира
    // вътре/извън или по контура на окръжност с център (0,0).
    double r, x, y;
    std::cout << "r: ";
    std::cin >> r;
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;

    double distance = sqrt(x * x + y * y);
    if (distance < r) {
        std::cout << "Inside" << std::endl;
    } else if (distance > r) {
        std::cout << "Outside" << std::endl;
    } else {
        std::cout << "On the line" << std::endl;
    }

    // 22. 1.  Да се състави програма, която въвежда от клавиатурата цяло положително петцифрено число.
    // Програмата да изведа:
    //     а) броя на нечетните цифри на числото;
    //     б) сумата на четните цифри на числото.
    int number;
    int oddCount = 0;
    int evenSum = 0;

    std::cout << "Enter a positive five-digit integer: ";
    std::cin >> number;

    if (number >= 10000 && number <= 99999) {
        int digit1 = number / 10000;
        int digit2 = (number / 1000) % 10;
        int digit3 = (number / 100) % 10;
        int digit4 = (number / 10) % 10;
        int digit5 = number % 10;

        if (digit1 % 2 == 0) { evenSum += digit1; }
        if (digit2 % 2 == 0) { evenSum += digit2; }
        if (digit3 % 2 == 0) { evenSum += digit3; }
        if (digit4 % 2 == 0) { evenSum += digit4; }
        if (digit5 % 2 == 0) { evenSum += digit5; }

        if (digit1 % 2 != 0) { oddCount++; }
        if (digit2 % 2 != 0) { oddCount++; }
        if (digit3 % 2 != 0) { oddCount++; }
        if (digit4 % 2 != 0) { oddCount++; }
        if (digit5 % 2 != 0) { oddCount++; }

        std::cout << "Count of odd digits: " << oddCount << std::endl;
        std::cout << "Sum of even digits: " << evenSum << std::endl;
    } else {
        std::cout << "Invalid input" << std::endl;
    }

    // 23. Да се напише програма, която при въведана сума да изписва броя монети,
    // нужни за получаване на сумата, ако  предположим, че разполагаме с безброй много монети от
    // 100, 50, 20, 10, 5, 2, 1 и първо взимаме колкото можем от най-голямата възможна монета.
    int amount;
    std::cin >> amount;

    // Входът трябва да се валидира!
    if (amount <= 0) {
        std::cout << "Сумата трябва да бъде положителна :(" << std::endl;
    }

    int coins100 = amount / 100; // Намираме колко монети с номинал 100 ще ни трябват
    amount = amount % 100; // Намираме остатъка от сумата и за него повтаряме стъпката със следващия най-голям номинал
    int coins50 = amount / 50;
    amount = amount % 50;
    int coins20 = amount / 20;
    amount = amount % 20;
    int coins10 = amount / 10;
    amount = amount % 10;
    int coins5 = amount / 5;
    amount = amount % 5;
    int coins2 = amount / 2;
    amount = amount % 2;
    int coins1 = amount;

    std::cout << coins100 << " (x100), "
            << coins50 << " (x50), "
            << coins20 << " (x20), "
            << coins10 << " (x10), "
            << coins5 << " (x5), "
            << coins2 << " (x2), "
            << coins1 << " (x1)" << std::endl;

    // 24. По въведена дата (ден, месец, година) да се изведе следващата.
    int day, month, year;
    std::cin >> day >> month >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    int daysInMonth;
    if (month == 2) {
        daysInMonth = isLeapYear ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    if (day == daysInMonth) {
        day = 1;
        if (month == 12) {
            month = 1;
            year += 1;
        } else {
            month += 1;
        }
    } else {
        day += 1;
    }

    std::cout << "Tomorrow is: " << day << "/" << month << "/" << year << std::endl;

    // 25. 💡 Дадени са ви 9 числа (матрица 3x3). Да се провери дали е магически квадрат.
    // Един квадрат наричаме магически ако сумата от стойностите по редовете,
    // сумата по колоните и сумата на главният и второстепенният диагонал е една и съща.
    // extra-credit work

}
