//
// Created by yaowenqiang on 2023/2/12.
//

#include "SmartPointer.h"

SmartPointer::SmartPointer(int *ptr): ptr{ptr} {


}

SmartPointer::~SmartPointer() {
    delete ptr;
    ptr = nullptr;

}
