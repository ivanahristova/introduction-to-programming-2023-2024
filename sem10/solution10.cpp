#include <iostream>

// Да се напише програма, която чете изречение от потребителя
// с максимален размер 255 символа и връща информация за броя числа в изречението (число може да бъде както цяло, така и дробно)

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

void skipNumber(char*& text) {
    bool decimal = false;

    while (*text != '\0') {
        if (isDigit(*text)) {
            text++;
            continue;
        } else if (!decimal && *text == '.') {
            decimal = true;
            text++;
        } else {
            return;
        }
    }
}

int countNumbers(char* sentence) {
	int numbersCount = 0;
	while (*sentence != '\0') {
		if (isDigit(*sentence)) {
            numbersCount++;
            skipNumber(sentence);
		}

        sentence++;
	}

	return numbersCount;
}

int main() {
    const int SIZE = 256;
    char* sentence = new char[SIZE];

    std::cin.getline(sentence, SIZE);

    std::cout << countNumbers(sentence);
}
