#include <iostream>

int main() {
    int x = 0;
    int y = 5;

    while (x < y) {
        std::cout << x << std::endl;
        x++;
    }
    std::cout << "Looped through 5 times" << std::endl;

    return 0;
}
