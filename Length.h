//
// Created by yaowenqiang on 2023/2/12.
//

#ifndef ULTIMATE_CPP_LENGTH_H
#define ULTIMATE_CPP_LENGTH_H


class Length {
public:
    explicit Length(int value);
    bool operator ==(const Length& second) const;
    bool operator !=(const Length& second) const;
    bool operator ==(int other) const;
    bool operator !=(int other) const;

private:
    int value;
};


#endif //ULTIMATE_CPP_LENGTH_H
