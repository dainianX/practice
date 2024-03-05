#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T, n;
    cin >> T;

    while (T--) {
        bool flag = false;
        cin >> n;
        for (int y = 1; y <= 10000; y++) {
            if ((int)sqrt(n * y * y + 1) * (int)sqrt(n * y * y + 1) == n * y * y + 1) {
                cout << y << endl;
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "No" << endl;
        }
    }
    return 0;
}
