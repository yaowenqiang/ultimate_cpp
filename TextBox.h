//
// Created by yaowenqiang on 2023/2/12.
//

#ifndef ULTIMATE_CPP_TEXTBOX_H
#define ULTIMATE_CPP_TEXTBOX_H
#include <string>
#include "Widget.h"
using namespace  std;

class TextBox :public Widget{
public:
//    TextBox() = default;
//    TextBox(bool enabled);
    void draw() const override;
//    void draw() const final override; final method can't be override, so the final class;
//    void draw() const override final;
    using Widget::Widget;
    explicit TextBox(bool enabled, const string& value);
    string getValue();
    void setValue(const string& value);
    ~TextBox();
private:
    string value;
};


#endif //ULTIMATE_CPP_TEXTBOX_H
