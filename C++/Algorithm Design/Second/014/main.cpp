#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, x[10001], y[10001], length = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    sort(y, y + n);
    int medium = y[(n - 1) / 2];

    for (int i = 0; i < n; i++) {
        length += abs(y[i] - medium);
    }

    cout << length << endl;
    return 0;
}
