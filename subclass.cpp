//
// Created by yaowenqiang on 2023/2/12.
//
#include <iostream>
#include "TextBox.h"
using namespace std;

void showWidget(Widget& widget) {
   widget.draw();
}
int main() {
   TextBox box;

   // Upcasting
   Widget widget = box;

   box.disable();
   cout << box.isEnable() << endl;

    showWidget(box);
   return 0;
}