//
// Created by yaowenqiang on 2023/2/16.
//

#include <iostream>
#include <list>
using namespace std;

void display(list<string>& lyst) {
    list<string>::iterator iter = lyst.begin();
    while (iter != lyst.end()) {
        cout << *iter << endl;
        ++iter;
    }
}

int main() {
    list<string> names;
    names.push_back("Jacky");
    names.push_back("John");
    display(names);

    cout << "first item:" << names.front() << endl;
    cout << "last item:" << names.back() << endl;

    display(names);
    names.reverse();
    names.sort();
    display(names);
    names.push_front("Marry");
    names.push_front("Front");
    names.push_back("back");
    display(names);
    cout << "Size of list: " << size(names) << endl;
    names.remove("Jacky");
    display(names);
    names.pop_back();
    names.pop_front();
    display(names);
    names.clear();
    if (names.empty()) {
        cout << "lists is empty." << endl;
    }
}