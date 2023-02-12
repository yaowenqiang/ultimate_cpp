//
// Created by yaowenqiang on 2023/2/12.
//

#include "Widget.h"
#include <iostream>
using namespace std;

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnable() const {
    return enabled;
}

Widget::Widget(bool enabled): enabled{enabled} {
    cout << "Widget constructed."  << endl;
}

Widget::~Widget() {
    cout << "Widget destructed." << endl;
}

void Widget::draw() const{
    cout << "drawing a Widget." << endl;
}
