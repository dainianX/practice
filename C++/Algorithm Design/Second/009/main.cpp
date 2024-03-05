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

    int size = static_cast <int> (numbers.size());
    for (int i = 0; i < size - 1; ) {
        if (numbers[i] == numbers[i + 1]) {
            // 找到重复的数字的范围
            int j = i + 1;
            while (j < size && numbers[i] == numbers[j]) {
                j++;
            }

            // 删除重复的数字，但只保留一个
            numbers.erase(numbers.begin() + i + 1, numbers.begin() + j);
            size -= (j - i - 1); // 更新数组大小
        } else {
            i++;
        }
    }

    cout << size << endl;
    for (auto num : numbers) {
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}
