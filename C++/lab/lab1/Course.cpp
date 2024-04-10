//
// Created by Anton on 2024-04-07.
//

#include "Course.h"

void Course::setGrade(int grade) {
    this->grade = grade;
}

string Course::getCourseName() const {
    return name;
}

Course::Course(int cno, string name) : cno(cno), name(std::move(name)), grade(-1) {}

int Course::getGrade() const {
    return grade;
}

int Course::getCourseNO() const {
    return cno;
}
