//
// Created by yaowenqiang on 2023/2/12.
//

#ifndef ULTIMATE_CPP_ARRAY_H
#define ULTIMATE_CPP_ARRAY_H
#include <cstddef>

class Array {
public:
    explicit Array(size_t size);
    ~Array();
    int& operator[](size_t index);
private:
    int* values;
    size_t size;
};


#endif //ULTIMATE_CPP_ARRAY_H
