cmake_minimum_required(VERSION 3.23)
project(ultimate_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(ultimate_cpp main.cpp utils/greet.cpp Rectangle.cpp Rectangle.h oop.cpp Person.cpp Person.h SmartPointer.cpp SmartPointer.h Length.cpp Length.h OperatorOverloading.cpp Array.cpp Array.h Widget.cpp Widget.h TextBox.cpp TextBox.h subclass.cpp Checkbox.cpp Checkbox.h polymorphism.cpp FileReader.cpp FileReader.h FileWriter.cpp FileWriter.h FileIO.cpp FileIO.h multiple_inheritance.cpp exceptions.cpp AccountLocked.cpp AccountLocked.h)

add_executable(oop oop.cpp Rectangle.cpp Rectangle.h Person.cpp Person.h)
add_executable(OperatorOverloading OperatorOverloading.cpp Length.cpp Length.h Array.cpp Array.h SmartPointer.cpp SmartPointer.h)
add_executable(subclass subclass.cpp TextBox.cpp TextBox.h Widget.cpp Widget.h)
add_executable(polymorphism polymorphism.cpp Checkbox.cpp Checkbox.h Widget.h Widget.cpp TextBox.h TextBox.cpp)
add_executable(multiple_inheritance multiple_inheritance.cpp)
add_executable(exceptions exceptions.cpp Rectangle.cpp Rectangle.h AccountLocked.cpp AccountLocked.h)