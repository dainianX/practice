#include <iostream>
using namespace std;
// 同一平面内有n（n≤500）条直线，已知其中p（p≥2）条直线相交于同一点，
// 则这n条直线最多能将平面分割成多少个不同的区域？

int portion(int n, int p) {
    if (p == 0) {
        return n + 1;
    }
    if (n == p) {
        return 2 * p;
    }
    int s = 0;
    for (int i = p + 1; i <= n; i++) {
        s += i;
    }
    return p * 2 + s;
}
int main() {
    int n, p;
    cin >> n >> p;
    cout << portion(n, p) << endl;
    return 0;
}
