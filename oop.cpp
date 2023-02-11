//
// Created by yaowenqiang on 2023/2/10.
//
#include <iostream>
#include <memory>
#include "Rectangle.h"
#include "Person.h"
#include "SmartPointer.h"
using namespace std;


void showPerson(Person person) {

}

void showRectangle(const Rectangle rectangle) {
//object will be copied if parameter is an object
}

int main() {
//    Rectangle rectangle;
//    Rectangle rectangle{100, 100};
    Rectangle rectangle(100, 100, "blue");
//    rectangle.height = 10;
//    rectangle.width = 10;
//    cout << rectangle.width << endl;

    rectangle.setHeight(10);
    cout << rectangle.getWidth() << endl;

    cout << Rectangle::getObjectCount() << endl;

    Rectangle second = rectangle;
    cout << Rectangle::getObjectCount() << endl;
    showRectangle(second);


    // const object, immutable
    const Rectangle three;// all members and method of a const object will become const
//    Rectangle* four = new Rectangle(1,2,"black");
    auto* four = new Rectangle(1,2,"black");
    cout << four->getBackground();
    delete four;
    four = nullptr;

    auto rectanglePtr = make_unique<Rectangle>(1,2);
    rectanglePtr->getWidth();







//    showPerson(20);

//    int* ptr = new int;
    SmartPointer smartPtr(new int);

    // array of obects

    Rectangle rectangles[3] = {
            Rectangle{},
            Rectangle{},
            Rectangle{},
    };

    Rectangle rectangles2[3] = {
            {},
            {1,2},
            {1,2,"Blue"},
    };

    for(Rectangle& rect: rectangles) {
        cout << rect.getWidth() << endl;
    }

    return 0;
}