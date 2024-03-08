#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;

    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    cin >> k;
    vector<int> index(k);
    for (int i = 0; i < k; i++) {
        cin >> index[i];
    }

    for (int i = 0; i < k; i++) {
        cout << num[index[i] - 1] << endl;
    }
    return 0;
}
