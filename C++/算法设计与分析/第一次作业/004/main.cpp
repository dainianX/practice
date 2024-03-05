#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int T, n, num;
    cin >> T;

    while (T--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> num;
        }
    }

    return 0;
}
