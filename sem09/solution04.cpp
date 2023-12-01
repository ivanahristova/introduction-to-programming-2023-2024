#include <iostream>

int numbersCount(const char* str) {
	bool prevDigit = false;
	int numbersCount = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			if (!prevDigit) {
				numbersCount++;
				prevDigit = true;
			}
		}
		else {
			prevDigit = false;
        }
	}

	return numbersCount;
}

int main() {
	char* str = new char[101];
	std::cin >> str;

	std::cout << numbersCount(str);

    delete[] str;
}
