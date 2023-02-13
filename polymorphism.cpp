//
// Created by yaowenqiang on 2023/2/13.
//
#include "Checkbox.h"
#include "Widget.h"
#include "TextBox.h"
#include <vector>
#include <memory>
using namespace  std;

int main() {
   Checkbox box;
   box.draw();

   // Static or early binding
   // Dynamic / late binding
//   vector<Widget> widgets;
//    vector<Widget* > widgets;
    vector<unique_ptr<Widget>> widgets;
//   widgets.push_back(Checkbox{});
//   widgets.push_back(TextBox{});
//    widgets.push_back(new Checkbox{});
//    widgets.push_back(new TextBox{});

    widgets.push_back(make_unique<Checkbox>());
    widgets.push_back(make_unique<TextBox>());
   for (const auto& widget : widgets) {
       widget->draw();
   }

}
