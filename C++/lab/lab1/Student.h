//
// Created by Anton on 2024-04-07.
//

#ifndef LAB1_STUDENT_H
#define LAB1_STUDENT_H

#include "Course.h"
#include "array"
using std::array;

class Student {
private:
    int id; //学号
    string name;
    array<Course, 3> courses;

public:
    Student(int id, string name);
    [[nodiscard]] int getSno() const;
    [[nodiscard]] array<Course, 3> getAllCourses() const;
    void setGradeForCourse(int courseIndex, int grade);
};

#endif //LAB1_STUDENT_H
