//
// Created by yaowenqiang on 2023/2/13.
//

#ifndef ULTIMATE_CPP_FILEWRITER_H
#define ULTIMATE_CPP_FILEWRITER_H
#include <iostream>
using namespace std;


class FileWriter {

public:
    FileWriter(string fileName)  {
        cout << "Constructor of FileWriter" << endl;
    }
    void write(string content) {
        cout << content << endl;
    }
    string fileName() {
        return "filename";
    }
};


#endif //ULTIMATE_CPP_FILEWRITER_H
