#include <iostream>

int main() {

    // 1. Да се въведат две цели числа и да се разменят техните стойности по три начина (без да се ползва swap()).
    int fisrt, second;
    std::cin >> fisrt >> second; // e.g. fisrt=3 second=4

    // third variable
    int temp = fisrt;
    fisrt = second;
    second = temp;
    std::cout << fisrt << ' ' << second << std::endl; // fisrt=4 second=3

    // arithmetic operations
    fisrt = fisrt + second;
    second = fisrt - second;
    fisrt = fisrt - second;
    std::cout << fisrt << ' ' << second << std::endl; // fisrt=3 second=4

    // bitwise operations
    fisrt = fisrt ^ second;
    second = fisrt ^ second;
    fisrt = fisrt ^ second;
    std::cout << fisrt << ' ' << second << std::endl; // fisrt=4 second=3

    // 2. Да се напише програма, която приема цяло число и извежда дали е точна степен на двойката.
    int power = 16;
    bool isPowerOfTwo = (power != 0) && ((power & (power - 1)) == 0);
    std::cout << isPowerOfTwo << std::endl;

    // 3. Какъв е резултатът от изпулнението на ляв шифт (<< n) върху число x?
    int number = 4;
    std::cout << (number << 2) << std::endl;
    number = 5;
    std::cout << (number << 1) << std::endl;
    std::cout << (number << 2) << std::endl;
    // number * (2^n)

    // 4. Да се определи какво ще изведе програмата:
    int a = 10;
    int b = 010;
    int c = 0x10;
    std::cout << a << ' ' << b << ' ' << c << std::endl;

    // 5. Напишете програма, която да ви изписва true, ако годината е високосна, и false в противен случай.
    int year;
    std::cin >> year;

    // the year number must be divisible by four
    // years divisible by 100, must also be divisible by 400

    bool isLeapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    if (isLeapYear) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    if (year % 400 == 0) {
        std::cout << "Yes\n";
    } else if (year % 100 == 0) {
        std::cout << "No\n";
    } else if (year % 4 == 0) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                std::cout << "Yes\n";
            } else {
                std::cout << "No\n";
            }
        } else {
            std::cout << "Yes\n";
        }
    } else {
        std::cout << "No\n";
    }

    // 6. Да се напише програма, която при подадено число от 1 до 7 изписва деня от седмицата, съответстващ на числото.

    int dayOfTheWeek = 6;

    // Дори да намери деня (например при day == 2), пак ще мине през всички останали проверки
    if (dayOfTheWeek == 1) {
		std::cout << "Monday\n";
    }
	if (dayOfTheWeek == 2) {
        std::cout << "Tuesday\n";
    }
    if (dayOfTheWeek == 3) {
		std::cout << "Wednesday\n";
    }
    if (dayOfTheWeek == 4) {
		std::cout << "Thursday\n";
    }
    if (dayOfTheWeek == 5) {
		std::cout << "Friday\n";
    }
    if (dayOfTheWeek == 6) {
		std::cout << "Saturday\n";
	}
    if (dayOfTheWeek == 7) {
		std::cout << "Sunday\n";
    }
    // Малко по-добре
    if (1 == dayOfTheWeek) {
        std::cout << "Monday\n";
    } else if (2 == dayOfTheWeek) {
        std::cout << "Tuesday\n";
    } else if (3 == dayOfTheWeek) {
        std::cout << "Wednesday\n";
    } else if (4 == dayOfTheWeek) {
        std::cout << "Thursday\n";
    } else if (5 == dayOfTheWeek) {
        std::cout << "Friday\n";
    } else if (6 == dayOfTheWeek) {
        std::cout << "Saturday\n";
    } else if (7 == dayOfTheWeek) {
        std::cout << "Sunday\n";
    } else {
        std::cout << "Invalid input\n";
    }

    switch (dayOfTheWeek) {
	    case 1: std::cout << "Monday\n"; break;
	    case 2: std::cout << "Tuesday\n"; break;
	    case 3: std::cout << "Wednesday\n"; break;
	    case 4: std::cout << "Thursday\n"; break;
	    case 5: std::cout << "Friday\n"; break;
	    case 6: std::cout << "Saturday\n"; break;
	    case 7: std::cout << "Sunday\n"; break;
	    default: std::cout << "Invalid input\n";
	}

    // 7. Да се напише програма, която въвежда размерите на геометрична фигура и пресмята лицето й.
    // Фигурите са четири вида: квадрат (s), правоъгълник (r), кръг (c) и триъгълник (triangle).
    // На първия ред на входа се чете вида на фигурата (square, rectangle, circle или triangle).
    // Ако фигурата е квадрат, на следващия ред се чете едно число – дължина на страната му.
    // Ако фигурата е правоъгълник, на следващите два реда четат две числа – дължините на страните му.
    // Ако фигурата е кръг, на следващия ред чете едно число – радиусът на кръга.
    // Ако фигурата е триъгълник, на следващите два реда четат две числа – дължината на страната му и дължината на височината към нея.
    // Резултатът да се закръгли до 3 цифри след десетичната точка.

    char figure;
    std::cin >> figure;

    if (figure == 's') {
        double side;
        std::cin >> side;
        double result = side * side;
        std::cout << "Area of the square is: " << result << std::endl;
    } else if (figure == 'r') {
        double width, height;
        std::cin >> width >> height;
        double result = width * height;
        std::cout << "Area of the rectangle is: " << result << std::endl;
    } else if (figure == 'c') {
        double radius;
        std::cin >> radius;
        double result = radius * radius;
        std::cout << "Area of the circle is: " << result  << "*PI" << std::endl;
    } else if (figure == 't') {
        double side, height;
        std::cin >> side >> height;
        double result = (side * height) / 2;
        std::cout << "Area of the triangle is: " << result << std::endl;
    } else {
        std::cout << "Invalid input\n";
    }
}

