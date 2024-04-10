//
// Created by Anton on 2024-04-07.
//

#ifndef LAB1_COURSE_H
#define LAB1_COURSE_H
#include "iostream"
using std::string;

class Course {
private:
    int cno; //课程号
    string name;
    int grade;

public:
    Course(int cno, string name);
    [[nodiscard]] int getGrade() const;
    void setGrade(int grade);
    [[nodiscard]] string getCourseName() const;
    [[nodiscard]] int getCourseNO() const;
};

#endif //LAB1_COURSE_H
