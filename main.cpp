#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <memory>
#include "utils/greet.hpp"
#include <cstring>
#include <vector>
// search for cmath reference
using namespace std;
//using std::cin, std::cout,std::endl;
//using namespace messaging;
using messaging::greet;

const int rows=2;
const int columns=3;

struct Date {
    short year = 1900;
    short month = 0;
    short day = 0;
};

struct Movie {
    string title = "";
    int releaseYear = 0;
    bool isPopular = true;
    Date releaseDate;
    bool equals(const Movie& movie) {

    }
//    bool equal(const Movie& movie) const {
    bool operator==(const Movie& movie) const {

    }
};

bool operator==(const Movie& first, const Movie& second ) {
}

ostream& operator<<(ostream& stream, const Movie& movie ) {
    stream << movie.title;
    return stream;
}
void increasePriceByReference(double& price) {
    price *= 1.2;
}
void increasePriceByPointer(double* price) {
    *price *= 1.2;
}


void swapPointer(double* a, double* b) {
    double tmp = *a;
    *a = *b;
    *b = tmp;
}

int linearSearch(int numbers[], int size, int target) {
    for(int i = 0; i < size; i++) {
        cout << numbers[i] << endl;
        if (numbers[i] == target) {
            return i;
        }
    }
    return -1;
}

// sorting algorithms
// bubble sort
// selection sort
// insertion sort
// merge sort
// quick sort

void bubbleSort(int numbers[], int size) {
    int sortedNumbers[size];
    for(int i = 0; i < size; i++) {
        int max = 0;
        cout << "number[i " << i << "] is "  << numbers[i] << endl;
        for(int j = i; j < size;j++) {
            cout << "number[j " << j << "] is " << numbers[j] << endl;
            if (numbers[j]> max) {
                int tmp = max;
                max = numbers[j];
                numbers[j] = tmp;
            }
        }
        cout << "max is " << max << endl;

        sortedNumbers[i] = max;
    }
    for(int i = 0; i < size; i++) {
        cout << sortedNumbers[i] << endl;
    }


}


void swap(int numbers[], int i, int j) {
    int tmp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = tmp;
}
void bubbleSortV2(int numbers[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 1; j < size;j++) {
            if (numbers[j]> numbers[j-1]) {
                swap(numbers, j, j-1);
            }
        }
    }
    for(int i = 0; i < size; i++) {
        cout << numbers[i] << endl;
    }
}

void increasePrice(double& price) {
    price+= 1.2;
}

void printNumbers(int numbers[], int size) {
    for(int i = 0;i < size; i++) {
        cout << numbers[i] << endl;
    }
}

void printMatrix(int matrix[rows][columns]) {
    for(int i = 0;i < rows;i++) {
        for(int j = 0;j < columns;j++ ) {
            cout << matrix[i][j] << ",";
        }
        cout << endl;
    }
}

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

    int aInteger = 1;
    double aDouble = 1.1;
//    int aCombined = aInteger + aDouble;
//    int aCombined = aInteger + (int)aDouble;
    int aCombined = aInteger + static_cast<int>(aDouble);
    cout << aCombined << endl;
    bool compareResult = x != 1;
    cout << boolalpha << compareResult << endl;
    double compareDouble = 1.1;
    int compareInt = 1;
    bool doubleCompareIntResult = compareDouble > compareInt;
    cout << doubleCompareIntResult << endl;

    for (int i = 0; i < 10; ++i) {
        cout << i << endl;
    }

    int loopNumbers[] = {1,2,3};
//    for (int i = 0; i < sizeof(loopNumbers) / sizeof(int);i++) {
    for (int i = 0; i < size(loopNumbers);i++) {
        cout << loopNumbers[i] << endl;
    }

    for (int i :loopNumbers) {
        cout << i << endl;
    }



    double doublePrice = 1.0;
    increasePrice(doublePrice);
    cout << doublePrice << endl;
    int firstArray[] = {1,2,3};
    int secondArray[size(firstArray)];
//    int secondArray[] = first;

    for (int i = 0; i < size(firstArray);i++) {
        secondArray[i] = firstArray[i];
    }

    for (int i = 0; i < size(firstArray);i++) {
        cout << secondArray[i] << endl;
    }

    cout << firstArray <<  " - " << secondArray << endl;
    cout << (firstArray == secondArray) << endl;

    bool areEqual = true;
    for (int i = 0; i < size(firstArray);i++) {
        if (firstArray[i] != secondArray[i]) {
            areEqual = false;
            break;
        }
    }

    cout << areEqual << endl;

    greet("jack");

    int newNumbers[] = {1,2,3};
    printNumbers(newNumbers, size(newNumbers));

    cout << sizeof(int) << endl;
    cout << sizeof(size_t) << endl;

    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;

    cout << numeric_limits<size_t>::min() << endl;
    cout << numeric_limits<size_t>::max() << endl;

    int values[3] = {1,2,3};
    auto [unpackedX, unpackedY, unpackedZ] = values;
    cout << unpackedX << "," << unpackedY << "," << unpackedZ << endl;


    // search algorithms
    // linear search
    // binary search
    // ternary search
    // jump search
    // exponential search


    int searchArray[] = {5, 1,9, 2,3,4, 7};
    int searchResult = linearSearch(searchArray, size(searchArray), 10);
    cout << searchResult << endl;
//    bubbleSort(searchArray, size(searchArray));
    bubbleSortV2(searchArray, size(searchArray));

    // 2d arrays
    int matrix[2][3] = {
    {1,2,3},
    {4,5,6},
    };

    printMatrix(matrix);


    // pointers

//    int *ptr = &number;
    int* ptr = &number;
    //    int* ptr = nullptr;
    cout << ptr << " -> " << *ptr << endl;
    *ptr = 100;
    cout << ptr << " -> " << *ptr << endl;


    // data is constant, but the pointer is not
    const int constNumber = 1;
    int nonConst = 2;
    const int* PointerToConstVariable = &constNumber;
    cout <<"PointerToConstVariable: " << *PointerToConstVariable << endl;
//    *PointerToConstVariable = 2;
    PointerToConstVariable = &nonConst;
    cout <<"PointerToConstVariable: " << *PointerToConstVariable << endl;

    // pointer is constant
    int* const constPointer = &nonConst;
    cout << *constPointer << endl;
//    constPointer = nullptr;

    // both data and pointer are constant
    const int* const ConstConstPointer = &constNumber;
    cout << *ConstConstPointer << endl;
//    *ConstConstPointer = 2;
//    ConstConstPointer = nullptr;

// dynamic memory allocation

    int* dynamicPointers = new int[5];
    int entries = 0;

    int capacity = 5;
    while(true) {
        cout << "Number: ";
        cin >> dynamicPointers[entries];
        if(cin.fail()) {
            break;
        }
        entries++;

        if (entries == capacity) {
            capacity *= 2;
            int* tmpPtr = new int[capacity];
            for(int i = 0;i < entries;i++) {
                tmpPtr[i] = dynamicPointers[i];
            }
            delete[] dynamicPointers;
            dynamicPointers = tmpPtr;
            tmpPtr = nullptr;
        }
    }

    for(int i = 0;i < entries;i++) {
        cout << dynamicPointers[i] << endl;
    }
    dynamicPointers = nullptr;
    delete[] dynamicPointers;


    // smart pointers


    unique_ptr<int> uniquePtr(new int);
    *uniquePtr = 4;
    unique_ptr<int> uniqueY = make_unique<int>();
    auto uniqueZ = make_unique<int>();
    auto uniqueArray = make_unique<int[]>(2);
    uniqueArray[0] = 0;
//    cout << uniquePtr << endl;
    cout << uniquePtr << endl;
//    cout << size(uniqueArray) << endl;

    // shared pointers
//    shared_ptr<int> sharedPtr = make_shared<int>();
    auto sharedPtr = make_shared<int>();
    *sharedPtr = 10;
    shared_ptr<int> sharedPtr2(sharedPtr);
    cout << (sharedPtr == sharedPtr2) << endl;
    *sharedPtr2 = 100;
    cout << *sharedPtr << endl;
    cout << *sharedPtr2 << endl;

    // cstrings

//    char name[5] = {'a','b','c','d','\0'};
    char name[] = "abcd";
    cout << name << size(name)<< endl;
    cout << strlen(name) << endl;
    char firstName[] = "jack" ;
    char lastName[] = "yao";
    strcat(firstName, lastName);
    cout << firstName  << endl;
    strcpy(firstName, lastName);
    cout << firstName  << endl;
    strcmp(firstName, lastName);


    // c++ strings
    string myName = "Jack";
    myName[0] = 'j';

    cout << myName.length() << endl;
    myName += "Yao";
    string oldName = myName;
    if (oldName == myName) {
        cout << "equal" << endl;
    }
    if (myName.starts_with('m')) {
        cout << "stat with m" << endl;
    }
    if (myName.empty()) {
        cout << "empty" << endl;
    }

    cout << myName.front() << " " << myName.back() << endl;

    // google c++ string reference

    // string functions for modifying strings
    myName.append("hi");
    myName.insert(0,"hi");
    myName.erase(0,3);
    myName.clear();
    myName.replace(0, 2, "MO");


    // string functions for search strings
    cout << "find: " << myName.find('a') << endl;
    if (myName.find('a' ) == -1) {
        cout << "doesn't exists." << endl;
    }
    if (myName.find("hell") == -1) {
        cout << "doesn't exists." << endl;
    }

    myName.rfind("yao");
    myName.find_first_of("yao");
    myName.find_last_of("yao");
    myName.find_last_not_of("yao");

    // extract sub strings

    string copy = myName.substr();

    // size_t = unsigned int/ long

    myName.substr(5);
    myName.substr(5, 3);
    size_t t = -1;// unsigned int can't store negative number
    cout << t << endl;// so t change to largest size_t, under flow

    // characters

    islower(myName[0]);
    isupper(myName[0]);
    isalpha(myName[0]);
    isdigit(myName[0]);
    isspace(myName[0]);
    (char)toupper(myName[0]);
    tolower(myName[0]);

    // string_numeric conversion

    string stringPrice = "100.10";
    cout << "stringPrice: " << stringPrice << endl;
    stod(stringPrice);
    stof(stringPrice);
    to_string(123);
    to_string(123.11);

    // escape sequences

    char singleQuote  = '\'';
    string escapeStr =  "c:\\ \"  \' ' my folder \n \t";

    // raw strings

    string rawString = R"(abc)";

    // structures

//    Movie movie  {};
    Date date { 1984, 6, 1};
    Movie movie = {
            "Terminator",
            1984,
            true,
//            date,
            {1984, 6,1},
    };
    Movie movie2 = {
            "Terminator",
            1984,
            true,
            {1984, 6,1},
    };
    movie.title = "Terminator";
    movie.releaseYear = 1984;

    // c++: structured binding
    // JS:  destructuring
    // Python: unpacking

    auto [title, releaseYear, isPopular] { movie };

    // vector

    vector<Movie> movies;
    movies.push_back(movie);
    movies.push_back({"Terminator2", 1984});
    cout << movies[0].title << endl;

    for (auto m :movies) {
        cout << m.title << endl;
    }






    cout << "title:" << movie.title <<  endl
        << "Release Year: " << movie.releaseYear << endl;










    return 0;
}

void greet(string title, string name) {
    cout << title << name << endl;
    int unsortedArray[] = {5,4,3,6,1,9};
//    bubbleSort(unsortedArray, size(unsortedArray));
}
