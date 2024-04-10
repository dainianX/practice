cmake_minimum_required(VERSION 3.27)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")
project(lab1)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab1 main.cpp
            Student.h
            Student.cpp
            Course.h
            Course.cpp)
