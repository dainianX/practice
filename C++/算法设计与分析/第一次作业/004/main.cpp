#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int T, n;
    cin >> T;

    while (T--) {
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        int result = numbers[0];
        for (int i = 1; i < n; i++) {
            result = lcm(result, numbers[i]);
        }
        cout << result << endl;
    }

    return 0;
}
