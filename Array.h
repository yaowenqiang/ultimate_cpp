//
// Created by yaowenqiang on 2023/2/12.
//

#ifndef ULTIMATE_CPP_ARRAY_H
#define ULTIMATE_CPP_ARRAY_H
#include <cstddef>
#include <stdexcept>
using namespace std;

template<typename T>
class Array {
public:
    explicit Array(size_t size);
    ~Array();
    T& operator[](size_t index);
private:
    T* values;
    size_t size;
};


template<typename T>
Array<T>::Array(size_t size) {
    values = new T[size];
    this->size = size;
}

template<typename T>
Array<T>::~Array() {
    delete[] values;
}

template<typename T>
T& Array<T>::operator[](size_t index) {
    if (index >= size) {
        throw invalid_argument("index");
    }
    return values[index];
}

#endif //ULTIMATE_CPP_ARRAY_H
