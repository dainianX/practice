#include <iostream>

// 函数参数使用const修饰，表明该参数不会被修改
void printMessage(const std::string& message) {
    // message += " Additional"; // 编译错误，尝试修改常量引用参数会导致编译错误
    std::cout << message << std::endl;
}

int main() {
    std::string greeting = "Hello";
    printMessage(greeting); // 调用函数时传递一个字符串

    return 0;
}
