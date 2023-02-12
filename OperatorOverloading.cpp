//
// Created by yaowenqiang on 2023/2/12.
//

#include <iostream>
#include <compare>
#include "Length.h"
#include "Array.h"
#include "SmartPointer.h"

using namespace  std;

int main() {
    Length first{10};
    Length second{20};
//    if (first == 10);
    if(first == second) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }

    int x = 10;
    int y = 20;
    auto result = x <=> y;
    cout << "result" << endl;
//    if(result == strong_ordering::equal) {
    if(result > 0) {
        cout << "less" << endl;
//    } else if (result == strong_ordering::greater) {
    } else if (result < 0) {
        cout << "greater" << endl;
    } else {
        cout << "equal" << endl;
    }

//    auto lengthCompareResult = first <=> second;
//    if(lengthCompareResult > 0) {
//        cout << "first length is less than second length" << endl;
//    } else if (lengthCompareResult < 0) {
//        cout << "first length is greater than second length" << endl;
//    } else {
//        cout << "first length is equal to second length" << endl;
//    }
    if (first > second) {
        cout << "first length is greater than second length" << endl;
    } else if (first < second) {
        cout << "first length is less than second length" << endl;
    } else {
        cout << "first length is equal to second length" << endl;
    }


    cout << first << " " << second << endl;
    cout << "first Length: ";
    cin >> first;
    cout << first << endl;

    Length fifth = first + second;
    cout << fifth << endl;

    Length six(6);
    Length seven = six; // not using the = overloading method, Copy constructor is called;
    seven = six;

    Length eight = seven++;
    cout << seven << endl;
    cout << eight << endl;
    Length nine = ++seven;
    cout << nine << endl;


    Array array(10);
    array[0] = 1;
    cout << array[0] << endl;
//    cout << array[10] << endl;
    SmartPointer ptr(new int);
    *ptr = 2;
    cout << *ptr << endl;
    *ptr = 20;
    cout << *ptr << endl;

    int v = static_cast<int>(first);
    cout << "v is " << v << endl;
    return 0;
}