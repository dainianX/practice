#include <iostream>
using namespace std;
//有1×n的一个长方形，用一个1×1、1×2和1×3的骨牌铺满方格。
// 例如当n=3时为1×3的方格。此时用1×1、1×2和1×3的骨牌铺满方格，共有四种铺法。如下图：

int main() {
    int n;
    long long s[41];
    cin >> n;
    s[1] = 1;
    s[2] = 2;
    s[3] = 4;
    for (int i = 4; i <= n; i++) {
        s[i] = s[i - 1] + s[i - 2] + s[i - 3];
    }
    cout << s[n] << endl;
    return 0;
}
