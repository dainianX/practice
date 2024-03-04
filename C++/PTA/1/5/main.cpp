#include <iostream>

int swap( int& x, int& y, int& z) {
    int max;

    int temp = z;
    z = y;
    y = x;
    x = temp;

    int tempX = x;
    if (tempX < y) {
        tempX = y;
    }
    if (tempX < z) {
        max = z;
    } else {
        max = tempX;
    }

    return max;
}

int main() {
    int a = 0, b = 0, c = 0, max;
    std::cin >> a >> b >> c;

    max = swap(a, b,c);

    std::cout << max << ' ' << a << ' ' << b << ' ' << c << std::endl;
    return 0;
}
