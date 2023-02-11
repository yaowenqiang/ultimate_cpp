//
// Created by yaowenqiang on 2023/2/9.
//

#include "Rectangle.h"
#include <iostream>
#include <string>
using namespace std;
//void Rectangle::draw() {
//    cout << "Drawing a rectangle " << endl;
//    cout << "Dimensions: " << width << ", " << height << endl;
//}

int Rectangle::getArea() {
    return width * height;
}

void Rectangle::setHeight(int height=0) {
    this->height = height;
}

int Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(int width=0) {
    if (width < 0) {
        throw invalid_argument("width");
    } else {
//        (*this).width = width;
        this->width = width;
    }
}

int Rectangle::getHeight() {
    return 0;
}

void Rectangle::setHeight1(int height) {
    this->height = height;
}

const string &Rectangle::getBackground() const {
    return background;
}

void Rectangle::setBackground(const string &background) {
    this->background = background;
}

// copy constructor

Rectangle::Rectangle(const Rectangle& source) {
    cout << "Rectangle copied" << endl;
    objectCount++;
    this->width = source.width;
    this->height = source.height;
    this->background = source.background;
}

Rectangle::Rectangle(int width, int height) {
    cout << "construct rectangle" << endl;
    objectCount++;
    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, const string &background) : Rectangle(width, height){
    cout << "construct rectangle with background." << endl;
    this->background = background;
}

Rectangle::~Rectangle() {
    cout << "Destructor called" << endl;
}

int Rectangle::objectCount = 0;

int Rectangle::getObjectCount() {
    return objectCount;
}
//Rectangle::Rectangle() {
//
//}
