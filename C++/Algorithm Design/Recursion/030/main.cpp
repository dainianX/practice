#include <iostream>
using namespace std;
// 有一种兔子，出生后一个月就可以长大，然后再过一个月一对长大的兔子就可以生育一对小兔子且以后每个月都能生育一对。
// 现在，我们有一对刚出生的这种兔子，那么，n个月过后，我们会有多少对兔子呢？假设所有的兔子都不会死亡。

int main() {
    int n;
    long long s[51];
    cin >> n;
    s[1] = 1;
    s[2] = 1;
    for (int i = 3 ; i <= 50; i++) {
        s[i] = s[i - 1] + s[i - 2];
    }
    cout << s[n] << endl;
    return 0;
}
