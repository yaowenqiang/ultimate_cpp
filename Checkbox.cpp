//
// Created by yaowenqiang on 2023/2/13.
//

#include "Checkbox.h"
#include <iostream>

using namespace std;
void Checkbox::draw() const {
    cout << "Drawing a checkbox" << endl;
}

Checkbox::~Checkbox() {
    cout << "Destructing a Checkbox" << endl;
}
