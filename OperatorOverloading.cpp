//
// Created by yaowenqiang on 2023/2/12.
//

#include <iostream>
#include <compare>
#include "Length.h"

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

    auto lengthCompareResult = first <=> second;
    if(lengthCompareResult > 0) {
        cout << "first length is less than second length" << endl;
    } else if (lengthCompareResult < 0) {
        cout << "first length is greater than second length" << endl;
    } else {
        cout << "first length is equal to second length" << endl;
    }
    return 0;
}