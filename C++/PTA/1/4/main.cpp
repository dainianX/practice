#include <iostream>

using namespace std;

int main() {
    int repeat;
    std::cin >> repeat;

    while (repeat--) {
        int hour, minute, second, n;
        char colon;
        cin >> hour >> colon >> minute >> colon >> second >> n;

        int totalSeconds = hour * 3600 + minute * 60 + second;
        totalSeconds = (totalSeconds + n) % (24 * 3600);

        hour = totalSeconds / 3600;
        minute = (totalSeconds % 3600) / 60;
        second = totalSeconds % 60;

        cout << "time: ";
        cout << hour << ':';
        cout << minute << ':';
        cout << second << endl;
    }

    return 0;
}
