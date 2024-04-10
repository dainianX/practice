#include "iostream"
#include "vector"
#include "Student.h"

// ANSI颜色码
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int choice, sno;
    string pw, name;
    bool found;
    char proceed = 'Y';
    const string PASSWORD = "dadalet'sgo";
    vector<Student> students;

    cout << YELLOW << "Welcome to Student Grade Management System!!!" << RESET << endl;
    cout << BLUE << "1. Student" << RESET << endl;
    cout << BLUE << "2. Teacher" << RESET << endl;
    cout << BLUE << "3. Exit" << RESET << endl;
    cout << GREEN << "Hint: 1. Look up your courses taken from last semester." << RESET << endl;
    cout << GREEN << "      2. Teachers only! Bind grades to courses." << RESET << endl;
    cout << GREEN << "      3. Close the window." << RESET << endl;
    cout << CYAN << "Your option: " << RESET;
    cin >> choice;

    while (true) {
        switch (choice) {
            case 1:
                do {
                    cout << GREEN << "Enter student ID to look up: " << RESET;
                    cin >> sno;
                    if (students.empty()) {
                        cout << RED << "No existing student ID in the database!" << RESET << endl;
                    }
                    for (const auto& student : students) {
                        found = false;
                        if (student.getSno() == sno) {
                            found = true;
                            cout << GREEN << "Name: " << name << RESET << endl;
                            for (const auto& course : student.getAllCourses()) {
                                if (course.getGrade() != -1) {
                                    cout << MAGENTA << course.getCourseName() << " : "
                                    << course.getGrade() << RESET << endl;
                                }
                            }
                            break;
                        }
                    }

                    if (!found) {
                        cout << RED << "Target student ID not in the database!" << RESET << endl;
                    }
                    cout << YELLOW << "Continue looking up? (Y/N) : " << RESET;
                    cin >> proceed;
                } while (proceed == 'Y' || proceed == 'y');
                cout << CYAN << "Your option: " << RESET;
                cin >> choice;
                break;

            case 2:
                do {
                    cout << WHITE << "Enter password: ";
                    cin >> pw;
                    if (pw == PASSWORD) {
                        int studentId;
                        int grade;
                        string studentName;
                        do {
                            int index = 0, i = 0;
                            cout << WHITE << "Student ID: " << RESET;
                            cin >> studentId;
                            cout << WHITE << "Student name: " << RESET;
                            cin.ignore();
                            getline(cin, studentName);
                            students.emplace_back(studentId, studentName);
                            array<Course, 3> courses = students[index].getAllCourses();

                            for (auto const& course : courses) {
                                bool validGrade;
                                do {
                                    validGrade = true;
                                    cout << WHITE << course.getCourseNO() << " " << course.getCourseName()
                                    << ": " << RESET;
                                    cin >> grade;
                                    if (grade < 0 || grade > 100) {
                                        cout << RED << "Invalid grade! Grade must be between 0 and 100."
                                        << RESET << endl;
                                        validGrade = false;
                                    }
                                } while(!validGrade);

                                students[students.size() - 1].setGradeForCourse(i, grade);
                                cout << GREEN << "Grade for " << course.getCourseName()
                                << " updated successfully." << RESET << endl;
                                i += 1;
                                index += 1;
                            }

                            cout << YELLOW << "Add another student? (Y/N) : " << RESET;
                            cin >> proceed;

                        } while (proceed == 'Y' || proceed == 'y');
                    } else {
                        cout << RED << "Wrong password! Try again." << RESET << endl;
                    }
                } while (pw != PASSWORD);

                cout << CYAN << "Your option: " << RESET;
                cin >> choice;
                break;

            case 3:
                exit(0);

            default:
                break;
        }
    }
}
