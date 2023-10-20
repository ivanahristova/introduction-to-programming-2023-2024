#include <iostream>
#include <cmath>

int main() {

	int n;
	std::cout << "Enter number: ";
	std::cin >> n;

	for (int i = 2; i <= n; i++) {
		bool isPrime = true;
        int limit = sqrt(i);
		for (unsigned j = 2; j <= limit; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			std::cout << i << ' ';
		}
	}

	std::cout << std::endl;
	return 0;
}
