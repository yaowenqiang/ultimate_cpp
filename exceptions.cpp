//
// Created by yaowenqiang on 2023/2/14.
//
#include <iostream>
#include "Rectangle.h"
#include "AccountLocked.h"

void login() {
    throw AccountLocked();
}

void createRectangle() {
    try {
        Rectangle rect;
        rect.setWidth(-1);
    } catch (const invalid_argument& ex) {
        cout << "Close the file" << endl;
        throw;
    }
}

void doWork() {
    createRectangle();
}


int main() {
    try {
        login();
    } catch (const AccountLocked& ex) {
        cout << ex.what() << endl;
    }
    try {
        cout << "Width: ";
        int width;
        cin >> width;
        Rectangle rect;
        rect.setWidth(width);
        cout << "Done";
        // logic_error
        // Parent parent = child
    } catch(const out_of_range& ex) {
        cout << ex.what() << endl;
//    } catch(const invalid_argument& ex) {
//        cout << ex.what() << endl;
//    } catch(const out_of_range& ex) {
//        cout << ex.what() << endl;
//    }
    } catch(const logic_error& ex) {
        cout << ex.what() << endl;
    }

    try {
        doWork();
    } catch (const exception& ex) {
        cout << ex.what() << endl;
    }
}