#include <iostream>
#include "Date.h"

int main() {

    int year, month, day;

    std::cin >> year >> month >> day;

    Date myBirth;

    myBirth.initialize(year, month, day);

    Date startTime;

    startTime.initialize(2021, 3, 18);

    myBirth.show('-');

    startTime.show('/');

    myBirth.addDay(10);

    myBirth.show('-');

    return 0;

}
