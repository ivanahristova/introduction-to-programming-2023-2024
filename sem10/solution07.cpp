#include <iostream>
#include <cstring>

// Да се напише функция, която превежда подаден текст в Pig Latin. Pig Latin се формира по следните правила:
// а) ако първата буква от думата е съгласна, тя се поставя като последна и към края на думата се добавя 'ay'
// б) ако първата буква от думата е гласна, то само към края се добавя 'way'
// Пример: hello -> ellohay
// Да се напише програма, която приема текст от потребителя с максимална дължина 255 символа и извежда преведаната му версия.

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

void translate(char* text, char* translation) {
    const size_t size = strlen(text);
    int index = 0;
    bool isWord = false;
    char startingLetter = ' ';

    for (size_t i = 0; i <= size; ++i) {
        char current = text[i];
        if (isalpha(current)) {
            if (!isWord) {
                isWord = true;
                startingLetter = current;
                if (isVowel(startingLetter)) {
                    translation[index++] = startingLetter;
                }
            } else {
                translation[index++] = current;
            }
        } else {
            if (isWord) {
                if (isVowel(startingLetter)) {
                    translation[index++] = 'w';
                    translation[index++] = 'a';
                    translation[index++] = 'y';
                } else {
                    translation[index++] = startingLetter;
                    translation[index++] = 'a';
                    translation[index++] = 'y';
                }
                isWord = false;
            }
            if (current != '\0') {
                translation[index++] = current;
            }
        }
    }

    translation[index] = '\0';
}

int main() {
    int size = 255;
    char* text = new char[size + 1];

    std::cin.getline(text, size + 1);

    char* translation = new char[3*size]();

    translate(text, translation);
    std::cout << translation;

    delete[] text;
    delete[] translation;
}
