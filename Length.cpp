//
// Created by yaowenqiang on 2023/2/12.
//

#include "Length.h"

Length::Length(int value) : value(value) {}

bool Length::operator==(int other) const {
    return value == other;
}

bool Length::operator!=(const Length &second) const {
    return !(value == second.value);
}

bool Length::operator==(const Length& second) const {
    return value == second.value;
}
