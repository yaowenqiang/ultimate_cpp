//
// Created by yaowenqiang on 2023/2/12.
//

#ifndef ULTIMATE_CPP_WIDGET_H
#define ULTIMATE_CPP_WIDGET_H


class Widget {
    // if a class has at least one pure virtual method, this class is a abstract class
public:
    // pure virtual method
    virtual void draw() const;// dynamic binding
    // if defined a virtual method ,must define a virtual destructor
    Widget() = default;
    Widget(bool enabled);
    void enable();
    void disable();
    void setEnabled(bool status);
    bool isEnable() const;
    ~Widget();
private:
    bool enabled;
};


#endif //ULTIMATE_CPP_WIDGET_H
