//
// Created by yaowenqiang on 2023/2/12.
//

#ifndef ULTIMATE_CPP_SMARTPOINTER_H
#define ULTIMATE_CPP_SMARTPOINTER_H


class SmartPointer {
public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer();
    int& operator*();
private:
    int* ptr;
};


#endif //ULTIMATE_CPP_SMARTPOINTER_H
