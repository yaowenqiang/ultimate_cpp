//
// Created by yaowenqiang on 2023/2/13.
//

#ifndef ULTIMATE_CPP_FILEIO_H
#define ULTIMATE_CPP_FILEIO_H
#include "FileReader.h"
#include "FileWriter.h"

class FileIO :public  FileReader, public FileWriter{
public:
    FileIO(string fileName): FileReader(fileName), FileWriter(fileName) {};
};


#endif //ULTIMATE_CPP_FILEIO_H
