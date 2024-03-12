//
// Created by Administrator on 2024-03-12.
//

#include "Date.h"

bool isLeapYear(int y) {
    return y % 100 == 0 ? y % 400 == 0 : y % 4 == 0;
}

int daysInMonth(int year, int month) {
    static const int daysPerMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2 && isLeapYear(year)) ? 29 : daysPerMonth[month];
}

void Date::initialize(int y, int m, int d) {
    if (y < 1900 || y > 2120) {
        cout << "year is invalid" << endl;
        exit(0);
    }

    if (m < 1 || m > 12) {
        cout << "month is invalid" << endl;
        exit(0);
    }
    if (d < 1 || d > daysInMonth(y, m)) {
        cout << "day is invalid" << endl;
        exit(0);
    }
    year = y;
    month = m;
    day = d;
}

void Date::addDay(int n) {
    day += n;
    while (day > daysInMonth(year, month)) {
        day -= daysInMonth(year, month);
        if (++month > 12) {
            month = 1;
            year++;
        }
    }
}

void Date::show(char c = '-') {
    cout << year << c << month << c << day << endl;
}


