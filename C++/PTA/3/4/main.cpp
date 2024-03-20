#include <iostream>
#include "Date.h"

/* 请在这里填写答案 */
int main()
{
    int year, month, day;
    std::cin >> year >> month >> day;
    try{
        Date myBirth(year, month, day);
        Date nationalDay;
        std::cout << myBirth.toString('-') << std::endl;
        std::cout << nationalDay.toString('/') << std::endl;
        myBirth.addDay(10);
        std::cout << myBirth.toString('-' ) << std::endl;
        if(myBirth.getMon() != 10)
            if(!myBirth.setMon(myBirth.getMon() - 2))
                std::cout << "month is invalid" << std::endl;
            else if(myBirth.getDay() != 1)
                if(!myBirth.setDay(myBirth.getDay() + 5))
                    std::cout << "day is invalid" << std::endl;
                else std::cout << myBirth.toString('/') << std::endl;

    }catch(const char* exp){
        cout << exp << endl;
    }
    return 0;
}