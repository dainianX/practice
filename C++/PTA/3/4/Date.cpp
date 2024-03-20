//
// Created by Anton on 2024-03-19.
//

#include "Date.h"

Date::Date() : year{1949}, month{10}, day{1}{}

Date::Date(int y, int m = 1, int d = 1) {
    if (y < 1900 || y > 2120) {
        throw "year is invalid";
    }
    if (m < 1 || m > 12) {
        throw "month is invalid";
    }
    if (d < 1 || d > daysInMonth(y, m)) {
        throw "day is invalid";
    }
    year = y;
    month = m;
    day = d;
}

void Date::addDay(int n) {
    day += n;
    if (day > daysInMonth(year, month)) {
        day -= daysInMonth(year, month);
        if (++month > 12) {
            month = 1;
            year++;
        }
    }
}

string Date::toString(char c) {
    string date = to_string(year) + c + to_string(month) + c + to_string(day);
    return date;
}

int Date::getDay() const {
    return day;
}

bool Date::setDay(int n) {
    if (n < 1 || n > daysInMonth(year, month)) {
        return false;
    }
    day = n;
    return true;
}

int Date::getMon() const {
    return month;
}

bool Date::setMon(int n) {
    if (n < 1 || n > 12) {
        return false;
    }
    month = n;
    return true;
}

bool Date::isLeapYear(int y) {
    return y % 100 == 0 ? y % 400 == 0: y % 4 == 0;
}

int Date::daysInMonth(int year, int month) {
    static const int daysPerMonth[]{0, 31, 28, 31, 30, 31,
                                    30, 31, 31, 30, 31, 30, 31};
    return (month == 2 && isLeapYear(year)) ? 29 : daysPerMonth[month];
}