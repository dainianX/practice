#include <iostream>

using namespace std;

int main() {
    string email;
    getline(cin, email);

    // 检查邮箱中是否包含空格字符
    for (char ch : email) {
        if (ch == ' ') {
            cout << "unlegal" << endl;
            return 0;
        }
    }

    // 查找 @ 和 .
    size_t atIndex = email.find('@');
    size_t dotIndex = email.find('.');

    // 检查 @ 和 . 是否存在，并且 @ 必须在 . 的前面
    if (atIndex == string::npos || dotIndex == string::npos || atIndex > dotIndex) {
        cout << "unlegal" << endl;
    } else {
        cout << "legal" << endl;
    }

    return 0;
}
