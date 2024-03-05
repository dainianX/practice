#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());

    int size = numbers.size();
    for (int i = 0; i < n - 1; i++) {
        if (numbers[i] == numbers[i + 1]) {
            numbers.erase(numbers.begin() + i);
            size--; //更新数组大小
            i--; //删除了一个元素，更新当前位置
        }
    }
    cout << size << endl;
    for (auto num : numbers) {
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}
