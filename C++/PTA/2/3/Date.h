//
// Created by Administrator on 2024-03-12.
//
#include <iostream>
#include <string>
using namespace std;

#ifndef INC_3_DATE_H
#define INC_3_DATE_H


class Date {
private:
    int year;
    int month;
    int day;

public:
    void initialize(int y, int m, int d);
    void addDay(int n);
    void show(char c);

};

#endif //INC_3_DATE_H
