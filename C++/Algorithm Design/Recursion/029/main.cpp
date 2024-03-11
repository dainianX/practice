#include <iostream>

using namespace std;
//楼梯有N级台阶，上楼可以一步上一阶，也可以一步上二阶。编一递归程序，计算共有多少种不同走法？

int step(int n) {
    if (n <= 2) {
        return n;
    }
    return step(n - 1) + step(n - 2);
}
int main() {
    int n;
    cin >> n;
    long long s = step(n);
    cout << s << endl;
    return 0;
}
