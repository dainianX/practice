#include <iostream>

using namespace std;

bool containsDigit(int n, int a) {
    do {
        if (n % 10 == a) {
            return true;
        }
        n /= 10;
    } while (n);

    return false;
}

int main() {
    int T, a;
    cin >> T;
    while (T--) {
        cin >> a;
        int count = 0, sum = 0;
        for (int i = 1001; i <= 9999; i++) {
            if (containsDigit(i, a) && i % a != 0) {
                sum += i;
                count++;
            }
        }
        cout << count << ' ' << sum << endl;
    }

    return 0;
}
