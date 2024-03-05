//
// Created by Administrator on 2024-02-28.
//

#include "iostream"
#include "Circle.h"
using namespace std;

double Circle::getArea() const {
    return radius * radius * PI;
}

Circle::Circle() {
    radius = 2.0;
}

Circle::Circle(double radius) {
    this->radius = radius;
}


