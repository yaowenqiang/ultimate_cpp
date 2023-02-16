//
// Created by yaowenqiang on 2023/2/16.
//

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> names;
    names.push_back("Jacky");
    names.push_back("John");
    list<string>::iterator iter = names.begin();
    while (iter != names.end()) {
        cout << *iter << endl;
        ++iter;
    }

    cout << "first item:" << names.front() << endl;
    cout << "last item:" << names.back() << endl;

    names.reverse();
    list<string>::iterator riter = names.begin();
    while (riter != names.end()) {
        cout << *riter << endl;
        ++riter;
    }
    names.sort();
    list<string>::iterator siter = names.begin();
    while (siter != names.end()) {
        cout << *siter << endl;
        ++siter;
    }

}