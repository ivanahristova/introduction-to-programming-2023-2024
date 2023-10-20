#include <iostream>

int main() {

    int number; // Променлива, в която ще записваме числото, което прочитаме от конзолата
    int maxEven = -1, maxOdd = -1; // -1 индикира, че не е било въведено четно/нечетно число
    int numbersCount = 0; // Инициализираме броя на всички числа с 0 - базова стойност
    int numberSum = 0; // Инициализираме сумата с 0 - неутралната стойност по отношение на събирането

    std::cin >> number;
    while (number != 0) {

        bool isEven = number % 2 == 0; // Булева променлива, в която държим информация дали текущото число е четно
        if (isEven && number > maxEven) { // Ако текущото число е четно и е по-голямо от най-голямото четно до момента
            maxEven = number; // Най-голямото четно става текущото число
        } else if (!isEven && number > maxOdd) { // Ако текущото число е нечетно и е по-голямо от най-голямото нечетно до момента
            maxOdd = number; // Най-голямото нечетно става текущото число
        }

        numberSum += number; // Увеличаване на сумата на числата със стойността на новото число
        numbersCount++; // Увеличаваме броя на числата с 1

        std::cin >> number;
    }

    if (maxEven == -1) {
        std::cout << "No even numbers" << std::endl;
    } else {
        std::cout << "Max even: " << maxEven << std::endl;
    }

    if (maxOdd == -1) {
        std::cout << "No odd numbers" << std::endl;
    } else {
        std::cout << "Max odd: " << maxOdd << std::endl;
    }

    std::cout << "Sum: " << numberSum << std::endl;

    if (numbersCount == 0) {
        std::cout << "No average of 0 numbers" << std::endl;
    } else {
        double average = (double)numberSum / numbersCount;
        std::cout << "Average: " << average << std::endl;
	}
}
