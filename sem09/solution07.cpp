#include <iostream>
#include <cstring>

const int MAX = 11;
const int SIZE = 10;

void printCrossword(char** crossword, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols && crossword[i][j] != '\0'; ++j) {
            std::cout << crossword[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

void printWord(const char* word) {
    if (strlen(word) == 0) {
        return;
    }

    for (int i = 0; word[i] != '\0'; ++i) {
        std::cout << word[i];
    }
    std::cout << std::endl;
}

void getWords(char** crossword, int rows, int cols) {
    int size = rows > cols ? rows : cols;
    char* word = new char[size + 1];

    int wordIndex = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (crossword[i][j] != ' ') {
                word[wordIndex++] = crossword[i][j];
            } else if (wordIndex > 0) {
                word[wordIndex] = '\0';
                printWord(word);
                wordIndex = 0;
            }
        }
        if (wordIndex > 0) {
            word[wordIndex] = '\0';
            printWord(word);
            wordIndex = 0;
        }
    }

    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            if (crossword[i][j] != ' ') {
                word[wordIndex++] = crossword[i][j];
            } else if (wordIndex > 0) {
                word[wordIndex] = '\0';
                printWord(word);
                wordIndex = 0;
            }
        }
        if (wordIndex > 0) {
            word[wordIndex] = '\0';
            printWord(word);
            wordIndex = 0;
        }
    }
}

int main() {
    const int rows = 5;
    const int cols = 10;

    char initialChars[5][10] = {
        {'a', 'b', 'c', 'd', ' ', 'f', 'g', 'h', 'i', '\0'},
        {'j', 'k', 'l', ' ', 'n', 'o', 'p', 'q', 'r', '\0'},
        {'s', 't', 'u', 'v', 'w', ' ', 'y', 'z', ' ', '\0'},
        {'b', 'c', ' ', 'e', 'f', 'g', ' ', 'i', 'j', '\0'},
        {' ', 'l', 'm', ' ', 'o', 'p', 'q', 'r', 's', '\0'}
    };

    char **crossword = new char *[rows];
    for (int i = 0; i < rows; ++i) {
        crossword[i] = new char[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            crossword[i][j] = initialChars[i][j];
        }
    }

    // TODO: call to getWords
    getWords(crossword, rows, cols);

    // TODO: deallocate memory
    for (unsigned int i = 0; i < rows; i++) {
        delete[] crossword[i];
    }
    delete[] crossword;

}
