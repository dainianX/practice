#include <iostream>

int main() {
    for (int i = 1000; i <= 1100; i++) {
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
