#include <iostream>

using namespace std;

int main() {
    int T, a, b, c, x, y;
    cin >> T;
    while (T--) {
        bool flag = false;
        cin >> a >> b >> c;
        for (x = 1; x <= 999; x++) {
            for (y = 1; y <= 999; y++) {
                if (a * x + b * y == c) {
                    cout << x << ' ' << y << endl;
                    flag = true;
                }
            }
        }
        if (!flag)
            cout << "No" << endl;
    }
    return 0;
}
