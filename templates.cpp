//
// Created by yaowenqiang on 2023/2/14.
//
#include <iostream>
#include <string>
#include "Pair.h"
#include "Array.h"

using namespace std;

//template<class>
template<typename T>
 T larger(T first , T second) {
    return (first > second) ? first : second;
}
template<typename K, typename V>
void display(K key , V value) {
    cout << key << " = " << value << endl;
}
int main() {
    Array<int> arr{1};
    arr[0] = 1;
    cout << arr[0] << endl;
    Array<string> arr2{1};
    arr2[0] = "string";
    cout << arr2[0] << endl;

    Array<Pair<string, int>> arr3{1};
//    arr3[0] = Pair("a",1);
    arr3[0] = {"b",1};
    cout << arr3[0].getKey() << " = " << arr3[0].getValue() << endl;


    Pair pair("a", 1);

    display("a", 1);
    display(1, 1);
    auto result = larger(1.1,1.2);
    auto result2 = larger(1,2);
    auto result3 = larger("abc","def");
    auto result4 = larger<double>(1,1.2);
}
