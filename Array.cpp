//
// Created by yaowenqiang on 2023/2/12.
//

#include "Array.h"
#include <stdexcept>

using namespace std;


Array::Array(size_t size) {
    values = new int[size];
    this->size = size;
}

Array::~Array() {
    delete[] values;
}

int& Array::operator[](size_t index) {
    if (index >= size) {
        throw invalid_argument("index");
    }
    return values[index];
}
