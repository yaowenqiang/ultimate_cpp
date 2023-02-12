//
// Created by yaowenqiang on 2023/2/12.
//

#include "TextBox.h"
#include <iostream>
using namespace std;
//TextBox::TextBox(const string &value): Widget(true), value{value}{
TextBox::TextBox(bool enabled, const string &value): Widget(enabled), value{value}{
}

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string &value) {

}

TextBox::~TextBox() {
    cout << "Textbox destructed." << endl;
}

void TextBox::draw() const {
    cout << "drawing a TexBox." << endl;
}

//TextBox::TextBox(bool enabled): Widget(enabled) {
////    cout << "Textbox constructed." << endl;
//}
