#include <iostream>

int main() {
    unsigned int studentsCount;
    std::cin >> studentsCount;

    unsigned int** studyTimes = new unsigned int*[studentsCount];
    for (size_t i = 0; i < studentsCount; i++) {
        studyTimes[i] = new unsigned int[2];
        std::cout << "i: ";
        std::cin >> studyTimes[i][0] >> studyTimes[i][1];
    }

    unsigned int hour;
    std::cin >> hour;

    int count = 0;
    for (size_t i = 0; i < studentsCount; i++) {
        if (studyTimes[i][0] <= hour && hour < studyTimes[i][1]) {
            count++;
        }
    }

    std::cout << count;

    for (size_t i = 0; i < studentsCount; i++) {
        delete[] studyTimes[i];
    }

    delete[] studyTimes;
}
