#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, max = 0;
    cin >> n;
    vector<int> numbers(n);
    vector<int> mode(30001);

    for (auto i : mode) {
        i = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        mode[numbers[i]]++;
        if (max < mode[numbers[i]]) {
            max = mode[numbers[i]];
        }
    }

    for (int i = 0; i < 30001; i++) {
        if (max == mode[i]) {
            cout << i << "  " << mode[i] << endl;
        }
    }

    return 0;
}
