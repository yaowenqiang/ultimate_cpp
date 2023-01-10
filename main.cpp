#include <iostream>
#include <cmath>

// search for cmath reference
using namespace std;
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

    // << stream insertion operator
    std::cout << "x = " ;
    std::cout << x << std::endl;

    cout << "x = " << x << endl
              << "y = " << y;

    // reading from console

    cout << "Enter a value for input1 and input2:";
    double input1;
    double input2;

    cin >> input1 >> input2;
    cout << input1 + input2 << endl;

    double result = floor(2.3);
    double result2 = pow(2,3);
    cout << result2;

    // data types


    // short 2 bytes -32768 to 32767
    // int 4 bytes -2B to 2B
    // long 4 bytes same
    // long long

    // float 4 bytes -3.4e38 to 3.4e38
    // double 8 bytes -1.7e308 to 1.7e308
    // long double 8 bytes -3.4e932 to 1.7e4832

    // bool 1 byte true/false
    // char 1 bytes

    double price = 99.99;
    float interestRate = 3.67f;

    long fileSizes = 90000L;
    char letter = 'a';
    bool isValid = true;
    auto trueOrFalse = true;

//    int number = {1.2};
    int number = {};// 0











    return 0;
}