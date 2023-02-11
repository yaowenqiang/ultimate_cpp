cmake_minimum_required(VERSION 3.23)
project(ultimate_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(ultimate_cpp main.cpp utils/greet.cpp Rectangle.cpp Rectangle.h oop.cpp Person.cpp Person.h)

add_executable(oop oop.cpp Rectangle.cpp Rectangle.h Person.cpp Person.h)