#include <iostream>
#include <cstring>

bool isSmallLatinLetter(char ch) {
	return ch >= 'a' && ch <= 'z';
}

void capitalize(char* str) {
	int diff = 'A' - 'a';
	for (size_t i = 0; str[i] != '\0'; i++) {
		if (isSmallLatinLetter(str[i])) {
            str[i] += diff; // str[i] = str[i] + diff;
        }
    }
}

int main() {
    unsigned int length;
    std::cin >> length;
    std::cin.ignore();

    char* text = new char[length + 1];
    std::cin.getline(text, length + 1);

    capitalize(text);

    std::cout << text << std::endl;

    delete[] text;
}
