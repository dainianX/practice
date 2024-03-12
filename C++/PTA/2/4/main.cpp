#include <iostream>

int main() {
    std::string str;
    std::cin >> str;

    if (str.length() < 2) {
        std::cout << "invalid" << std::endl;
        return 0;
    }

    if (str.at(0) == '.' || str.substr(str.length() - 2) != ".c") {
        std::cout << "invalid" << std::endl;
    } else {
        str.replace(str.length() - 2, 2, ".cpp");
        std::cout << str << std::endl;
    }

    return 0;
}
