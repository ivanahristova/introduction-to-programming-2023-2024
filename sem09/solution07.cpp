#include <iostream>

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

// TODO: implement
// ____ printWord(______ word) {
//
//
//
// }

// TODO: implement
// _____ getWords(char** crossword, int rows, int cols) {
//
//
//
// }

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

    // TODO: deallocate memory
}
