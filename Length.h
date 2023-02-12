//
// Created by yaowenqiang on 2023/2/12.
//

#ifndef ULTIMATE_CPP_LENGTH_H
#define ULTIMATE_CPP_LENGTH_H
#include <compare>
#include <ostream>
#include <istream>

using namespace std;

class Length {
public:
    explicit Length(int value);
    Length() = default;

    bool operator ==(const Length& second) const;
    bool operator !=(const Length& second) const;
    bool operator ==(int other) const;
    bool operator !=(int other) const;
//    bool operator <(const Length& other) const;
    std::strong_ordering operator <=>(const Length& other) const;
//    bool operator <=(const Length& other) const;
//    bool operator >(const Length& other) const;
//    bool operator >=(const Length& other) const;


    Length operator +(const Length& second) const;
    Length operator -(const Length& second) const;
    Length operator *(const Length& second) const;
    Length operator /(const Length& second) const;

    Length& operator +=(const Length& second);
    Length& operator -=(const Length& second);
    Length& operator *=(const Length& second);
    Length& operator /=(const Length& second);

    Length& operator =(const Length& second);

    // unary operator
    Length& operator ++();
    Length operator ++(int);
    Length& operator --();
    Length operator --(int);

    explicit operator int() const;



    int getValue() const;

    void setValue(int value);
private:
    int value;
    int x = 0;
    friend ostream& operator<<(ostream& ostream, const Length& length);
};


ostream& operator<<(ostream& ostream, const Length& length);
istream& operator>>(istream& istream, Length& length);
#endif //ULTIMATE_CPP_LENGTH_H
