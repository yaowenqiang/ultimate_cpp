#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

// search for cmath reference
using namespace std;
int main() {
    const short minValue = 1;
    const short maxValue = 6;
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

//    cin >> input1 >> input2;
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


    // number systems

    int binary_number = 0b11111111;// ?
    int hex_number = 0xFF;
    unsigned int unsigned_number = -255; // not recommended
    cout << binary_number;
    cout << hex_number;
    cout << unsigned_number;

    // narrowing

    int oneMillion = 1'000'000;
//    short shortNumber = {oneMillion};
//    cout << shortNumber;

    short anotherOneMillion = 1'000'000;
    int aInt = {anotherOneMillion};
    cout << aInt;









    long elapsedSeconds = time(nullptr);
//    time(0);
//    srand(elapsedSeconds);
    srand(time(nullptr));
    int randNumber = rand() % 10;
    cout << std::endl;
    cout << randNumber;
    cout << std::endl;

    short first  = (rand() % (maxValue - minValue + 1)) + minValue;
    short second  = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << first << ", " << second << endl;

    cout << left;
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
         << setw(10) << "Summer" << setw(10) << "Hot" << endl;

    cout << fixed << setprecision(2) << 12.34567;

    cout << endl;

    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;


    cout << numeric_limits<int>::min() << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << sizeof(long) << endl;
    cout << numeric_limits<long>::min() << endl;
    cout << numeric_limits<long>::max() << endl;
    cout << sizeof(float) << endl;
    cout << numeric_limits<float>::min() << endl;
    cout << numeric_limits<float>::max() << endl;

    int largestInteger = numeric_limits<int>::max();
    largestInteger++;
    cout << largestInteger << endl;
    int smallestInteger = numeric_limits<int>::max();
    smallestInteger--;
    cout << smallestInteger << endl;
    double largestDouble = numeric_limits<double>::max();
    largestDouble++;
    cout << largestDouble << endl;

    float largestFloat = numeric_limits<float>::max();
    largestFloat++;
    cout << largestFloat << endl;

    // booleans
    bool isNewUser = false;
    cout << boolalpha << isNewUser << endl;
    cout << noboolalpha << isNewUser << endl;


    // char and strings

    char ch = 'a';
//    char ch = 98;
    cout << ch << endl;
    cout << +ch << endl;

//    string name = "";
//    cout << "Enter your name: ";
////    cin >> name;
//    getline(cin, name);
//    cout << "Hi, " << name;


// arrays

    int numbers[5] = {1,2,3,4,5};
    cout << numbers << endl;
    cout << numbers[0] << endl;
    numbers[2] = 10;
    cout << numbers[5] << endl;






    return 0;
}