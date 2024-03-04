#include <iostream>
#include <array>

using namespace std;

/*int max(int x, double y) {
    return x;
}

double max(double x, int y) {
    return x;
}*/

// 默认参数
/*void max(int y) {

}

void max(int y = 1) {
    函数重载时，不允许重定义默认参数
}*/

int add(int x, int y = 1) {
    return x + y;
}

int add(int x) {
    return x + 10;
}

// 内联函数
inline void swap(int *m, int *n)
{
    int tmp = *m;
    *m = *n;
    *n = tmp;
}

int main() {
    // 初始化列表
    /*int x{1};
    int a[]{11, 2, 3};
    char s1[3]{'a', 'b'};*/

    // foreach 循环
    /*for (char i : s1) {
        cout<<i;
    }*/

    // 重载函数二义调用导致编译错误
    /* cout << max(1, 2);*/
    /*max(1, 2);*/
    //add(20);

    // 动态内存分配
    /*int n;
    int *a = new int[10];

    for (int i = 0; i < 10; i++) {
        *(a+i) = i;
    }
    delete []a;*/

    // auto
    //auto a{10}, b{20.0}; // 在同一个auto序列的变量必须推断为同一类型

    /*bool isAlpha = false;
    cout << boolalpha << "isAlpha = " << isAlpha << endl;
    cout << typeid(1).name();*/

    /*int p1[]{1, 2};
    auto& p2{p1};
    cout << typeid(p2).name() << endl;*/

    // Type Casting
    // cout << static_cast<double> (1) / 2;

    // Range based for-loop
    /*std::array<int, 5> a{2, 1, 4, 3, 5};
    for (auto i : a) {
        cout << i;
    }
    cout << ' ';
    for (auto& i : a) {
        i *= 2;
        cout << i << ' ';
    }*/

    // inline function
    /*int x = 1, y = 2;
    swap(&x, &y);
    cout << x << ' ' << y;*/

    cout << 'h';

    return 0;
}
