//
// Created by yaowenqiang on 2023/2/10.
//
#include <iostream>
#include "Rectangle.h"
#include "Person.h"
using namespace std;


void showPerson(Person person) {

}

void showRectangle(const Rectangle rectangle) {
//object will be copied if parameter is an object
}

int main() {
//    Rectangle rectangle;
//    Rectangle rectangle{100, 100};
    Rectangle rectangle(100, 100, "blue");
//    rectangle.height = 10;
//    rectangle.width = 10;
//    cout << rectangle.width << endl;

    rectangle.setHeight(10);
    cout << rectangle.getWidth() << endl;

    Rectangle second = rectangle;
    showRectangle(second);

//    showPerson(20);

    return 0;
}