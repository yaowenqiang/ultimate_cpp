//
// Created by yaowenqiang on 2023/2/9.
//

#ifndef ULTIMATE_CPP_RECTANGLE_H
#define ULTIMATE_CPP_RECTANGLE_H
#include <string>
#include <iostream>
using namespace std;


class Rectangle {
public:
    // default constructor
//    Rectangle();
    Rectangle() = default;

    // copy constructor
//    Rectangle(const Rectangle& source) = delete; // delete the copy constructor to stop obect copying
    Rectangle(const Rectangle& source);
//    Rectangle(int width, int height): width(width), height(height);
    Rectangle(int width, int height);
//    {
//       this->width = width;
//       this->height = height;
//        cout << "construct rectangle" << endl;
//        setWidth(width);
//        setHeight(height);
//    }

    // constructor delegate
    Rectangle(int width, int height, const string& background);
//    {
//        cout << "construct rectangle with background." << endl;
//        this->background = background;
//    }
    int getWidth();

    int getArea();

    void setWidth(int width);

    int getHeight();

    void setHeight(int height);
    ~Rectangle();// destructor, can't be overloaded

    static int getObjectCount();

private:
    int width = 0;
    int height = 0;
    string background;

    static int objectCount;

public:
    void setHeight1(int height);

    const string &getBackground() const;

    void setBackground(const string &background);
};


#endif //ULTIMATE_CPP_RECTANGLE_H
