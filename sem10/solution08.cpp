#include <iostream>
#include <cstring>

void getIndex(const char* text, const char* result) {
    if (result != nullptr) {
        std::cout << result - text << std::endl;
    } else {
        std::cout << "No occurrence" << std::endl;
    }
}

const char* getFirstOccurrence(const char* sentence, const char* word) {
    while (*sentence != '\0') {
        const char* tempSentence = sentence; // Използваме за придвижване по sentence в текущата проверка
        const char* tempWord = word; // Използваме за придвижване по word в текущата проверка

        bool isAtBeginning = (sentence == tempSentence); // Ще бъде true само при първата итерация на цикъла
        bool hasSpaceBefore = !isAtBeginning && *(sentence - 1) == ' '; // Ако не сме в началото на думата трябва текущата да се предхожда от спейс

        // Не разглеждаме подниз
        if (!isAtBeginning && !hasSpaceBefore) {
            sentence++;
            continue;
        }

        bool match = true;
        while (*tempWord != '\0') {
            if (*tempSentence != *tempWord) {
                match = false;
                break;
            }
            tempSentence++;
            tempWord++;
        }

        bool isAtEnd = *tempSentence == '\0';
        bool hasSpaceAfter = !isAtEnd && (*tempSentence == ' ' || *tempSentence == '\0');

        if (match // Ако думата е намерена трябва да се уверим, че не е като подниз, ами като самостоятелна дума
            && (isAtBeginning || hasSpaceBefore) // Първо проверяваме дали е първа, за да не достъпваме памет, която не сме заделяли
            && (isAtEnd || hasSpaceAfter)) // Първо проверяваме дали е последна по същата причина
        {
            return sentence;
        }
        sentence++;
    }

    return nullptr;
}

int main() {
    const char* sentence1 = "Test test the sentence";
    const char* sentence2 = "Test the sentence";
    const char* word = "test";

    const char* result1 = getFirstOccurrence(sentence1, word);
    const char* result2 = getFirstOccurrence(sentence2, word);

    getIndex(sentence1, result1);
    getIndex(sentence2, result2);
}
