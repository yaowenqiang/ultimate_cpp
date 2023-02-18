//
// Created by yaowenqiang on 2023/2/18.
//
#include <iostream>
#include <deque>
using namespace std;

int find(deque<string> d, string value) {

    for(int i = 0; i < d.size();i++) {
        if(d[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    deque<string> line;
    line.push_back("Customer 1");
    line.push_front("Customer 2");
    line.push_back("Customer 3");
    for(int i = 0; i < line.size(); i++) {
        cout  << line[i] << endl;
    }
//    line.pop_front();
//    line.pop_back();
    string name;
    cout << "Enter name to find:";
    cin >> name;
    int pos = find(line, name);
    if (pos > -1) {
        cout << name << " found at position " << pos << endl;
    } else {
        cout << name << " not found."  << endl;
    }

    return 0;
}