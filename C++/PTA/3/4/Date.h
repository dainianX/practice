//
// Created by Anton on 2024-03-19.
//
#include <iostream>

using namespace std;

#ifndef INC_4_DATE_H
#define INC_4_DATE_H


class Date {
private:
    int year;
    int month;
    int day;
    bool isLeapYear(int y);
    int daysInMonth(int year, int month);
public:
    Date();
    Date(int y, int m, int d);
    void addDay(int n);
    string toString(char c);
    [[nodiscard]] int getDay() const;
    bool setDay(int n);
    [[nodiscard]] int getMon() const;
    bool setMon(int n);
};


#endif //INC_4_DATE_H
