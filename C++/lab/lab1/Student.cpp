//
// Created by Anton on 2024-04-07.
//

#include "iostream"
#include "Student.h"

using std::cout;
using std::endl;

Student::Student(int id, string name) : id(id), name(std::move(name)),
courses({Course(101, "Data Structure"), Course(102, "Database"),
         Course(103, "Java")}) {} //默认课程

int Student::getSno() const {
    return id;
}

array<Course, 3> Student::getAllCourses() const {
    return courses;
}

void Student::setGradeForCourse(int courseIndex, int grade) {
    courses[courseIndex].setGrade(grade);
}
