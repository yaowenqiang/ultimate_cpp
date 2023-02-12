//
// Created by yaowenqiang on 2023/2/12.
//

#ifndef ULTIMATE_CPP_WIDGET_H
#define ULTIMATE_CPP_WIDGET_H


class Widget {
public:
    virtual void draw() const;// dynamic binding
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
