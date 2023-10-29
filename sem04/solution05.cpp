#include <iostream>
#include <iomanip>

bool isTheFlowerPicked(char flower) {
    return (flower == 'h' || flower == 'm' || flower == 'l');
}

bool isEdelvais(char flower) {
    return flower == 'e';
}

int main() {
    char flower;
    int steps = 0;
    int flowersCount = 0;

    while (steps <= 1000) {
        std::cin >> flower;

        if (isEdelvais(flower)) {
            std::logic_error("Lili got lost :(( ");
        } else if (isTheFlowerPicked(flower)) {
            flowersCount++;
        }

        steps++;
    }

    // 1
    std::cout << "Lili has collected " << flowersCount << " flowers." << std::endl;

    // 2
    int bouquets = flowersCount / 3;
    int remainingFlowers = flowersCount % 3;

    std::cout << "Possible bouquets: " << bouquets << std::endl;
    std::cout << "Remaining flowers: " << remainingFlowers << std::endl;

    // 3
    double percentage = ((double)flowersCount / steps) * 100;

    std::cout << "Percentage from total " << std::fixed << std::setprecision(2) << percentage << std::endl;


    return 0;
}
