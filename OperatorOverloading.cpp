//
// Created by yaowenqiang on 2023/2/12.
//

#include <iostream>
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
    return 0;
}
