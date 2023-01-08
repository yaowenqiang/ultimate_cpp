#include <iostream>
int main() {
    const double pi = 3.14;
    int file_size = 100; // Snake Case
    int FileSize = 100; // Pascal Case
    int fileSize = 100; // Camel Case
    int iFileSize = 100; // Hungarian Notation, i means variable type

    int counter = 100;
    double sales = 9.99;
    std::cout << "Hello world!";
    std::cout << file_size;

    double x = 10;
    int y = x++; // y = 10, x = 11
    int y1 = ++x; // y2 = 11, x = 11

    double z = x / y;
    std::cout << z;
    std::cout << z;
    return 0;
}