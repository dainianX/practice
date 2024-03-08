#include<iostream>
#include<algorithm>

using namespace std;

int x[10001],y[10001];
int main(){
    int n, x1, y1, step = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    sort(x,x + n);
    sort(y,y + n);

    for (int i = 0; i < n; i++) {
        x[i] -= i;
    }

    sort(x,x + n);
    x1 = x[(n - 1) / 2];
    y1 = y[(n - 1) / 2];
    for (int i = 0; i < n; i++) {
        step += abs(x[i] - x1);
        step += abs(y[i] - y1);
    }

    cout << step;
    return 0;
}