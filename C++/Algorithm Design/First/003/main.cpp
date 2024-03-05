#include <iostream>

using namespace std;

int main() {
    int T, K;
    cin >> T;

    while (T--) {
        int count = 1, temp = 1;
        cin >> K;

        if (K == 1 ) {
            cout << K << endl;
            continue;
        }

        while (temp) {
            temp = temp * 10 + 1;
            temp = temp % K;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}
