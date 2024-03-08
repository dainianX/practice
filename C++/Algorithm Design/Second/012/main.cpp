#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k, count = 0;

    cin >> n >> k;
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    int number = num[0] - 1;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (number != num[i]) {
            count++;
            number = num[i];
            if (k == count) {
                cout << number << endl;
                flag = false;
                break;
            }
        }
    }
    if (flag) {
        cout << "NO RESULT" << endl;
    }

    return 0;
}
