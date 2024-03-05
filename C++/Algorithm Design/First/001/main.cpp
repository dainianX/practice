#include <iostream>

using namespace std;
// 1 n 2^n n^2 nlogn n^2 n^3
int main() {
    int T, a;
    cin >> T;
    while (T--) {
        cin >> a;
        switch(a) {
            case 1:
                cout << "1" << endl;
                break;
            case 2:
                cout << "n" << endl;
                break;
            case 3:
                cout << "2^n" << endl;
                break;
            case 4:
                cout << "n^2" << endl;
                break;
            case 5:
                cout << "nlogn" << endl;
                break;
            case 6:
                cout << "n^2" << endl;
                break;
            case 7:
                cout << "n^3" << endl;
                break;
        }
    }
    return 0;
}
