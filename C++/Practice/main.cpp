#include <iostream>
using namespace std;

class Animal {
public:
    int age;
    int weight;
    //无参构造函数
    Animal() {
        age = 1;
        weight = 2;
    }
    //所有参数值都有默认值的构造函数
    Animal(int age = 2, int weight = 3) {
        this->age = age;
        this->weight = weight;
    }

};

int main() {
    Animal dog1 {2, 3};
    Animal dog2 {3, 4};
    std::cout << "dog1.age = " << dog1.age << std::endl;
    std::cout << "dog2.age = " << dog2.age << std::endl;

    dog1.age = 5;
    std::cout << "After modification:" << std::endl;
    std::cout << "dog1.age = " << dog1.age << std::endl;
    std::cout << "dog2.age = " << dog2.age << std::endl;
    return 0;
}