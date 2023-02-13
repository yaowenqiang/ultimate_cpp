//
// Created by yaowenqiang on 2023/2/13.
//

#ifndef ULTIMATE_CPP_FILEREADER_H
#define ULTIMATE_CPP_FILEREADER_H
#include <string>
#include <iostream>

using namespace std;
class FileReader {
public:
    FileReader(string fileName)  {
        cout << "Constructor of FileReader" << endl;
    }

    string fileName() {
        return "filename";
    }
    string read() {
        return "Hello World";
    }

};


#endif //ULTIMATE_CPP_FILEREADER_H
