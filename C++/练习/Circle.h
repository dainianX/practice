//
// Created by Administrator on 2024-02-28.
//

#ifndef INC_1_CIRCLE_H
#define INC_1_CIRCLE_H
#define PI 3.14;

class Circle {
    // 就地初始化
    /*int n(1); //与函数混淆，不能有（），可以用{}
    int a[] = {1, 2, 3}; // 在类中，必须指明数组大小*/
    double radius;
public:
    Circle();
    explicit Circle(double radius);
    double getArea() const;
};

#endif //INC_1_CIRCLE_H
