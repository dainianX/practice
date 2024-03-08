#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    int number;
    double grade;
} stu[101];

int comp(const Student &a, const Student &b) {
    return a.grade > b.grade;
}

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].number >> stu[i].grade;
    }

    sort(stu, stu + n, comp);

    cout << stu[k - 1].number << ' ' << stu[k - 1].grade << endl;
    return 0;
}
