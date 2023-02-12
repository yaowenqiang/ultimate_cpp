//
// Created by yaowenqiang on 2023/2/12.
//

#include "Length.h"
#include <iostream>


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

std::strong_ordering Length::operator<=>(const Length &other) const {
    return value <=> other.value;
}

// inline function a little faster
inline int Length::getValue() const {
    return value;
}
//int Length::getValue() const {
//    return value;
//}

void Length::setValue(int value) {
    Length::value = value;
}

//bool Length::operator<(const Length &other) const {
//    return value < other.value;
//}
//
//bool Length::operator>(const Length &other) const {
//    return value > other.value;
//}
//
//bool Length::operator<=(const Length &other) const {
//    return !(value > other.value);
//}
//
//bool Length::operator>=(const Length &other) const {
//    return !(value < other.value);
//}
ostream& operator<<(ostream& ostream, const Length& length) {
    ostream << length.getValue();
//    ostream << length.x;
    return ostream;
}

Length Length::operator+(const Length &second) const {
    return Length(value + second.value);
}

Length Length::operator-(const Length &second) const {
    return Length(value + second.value);
}
Length Length::operator*(const Length &second) const {
    return Length(value * second.value);
}

Length Length::operator/(const Length &second) const {
    if (second.value == 0) {
        throw invalid_argument("divider can't be 0!");
    }
    return Length(value / second.value);
}

Length& Length::operator+=(const Length &second) {
    value += second.value;
    return *this;
}
Length& Length::operator-=(const Length &second) {
    value -= second.value;
    return *this;
}
Length& Length::operator*=(const Length &second) {
    value *= second.value;
    return *this;
}
Length& Length::operator/=(const Length &second) {
    if (second.value == 0) {
        throw invalid_argument("divider can't be 0!");
    }
    value /= second.value;
    return *this;
}

Length& Length::operator=(const Length &second) {
    cout << "Object assigned" << endl;
    value = second.value;
    return *this;
}

Length &Length::operator--() {
    value--;
    return *this;
}
Length Length::operator--(int) {
    Length copy = *this;
    operator--();
    return copy;
}

Length &Length::operator++() {
    value++;
    return *this;
}
Length Length::operator++(int) {
    Length copy = *this;
    operator++();
    return copy;
}

Length::operator int() const {
    return value;
}

istream& operator>>(istream& istream, Length& length) {
    int value;
    istream >> value;
    length.setValue(value);
    return istream;
}
