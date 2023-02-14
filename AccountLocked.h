//
// Created by yaowenqiang on 2023/2/14.
//

#ifndef ULTIMATE_CPP_ACCOUNTLOCKED_H
#define ULTIMATE_CPP_ACCOUNTLOCKED_H
#include <exception>

using namespace std;

class AccountLocked: public exception{
public:
    const char* what() const _NOEXCEPT override;
};


#endif //ULTIMATE_CPP_ACCOUNTLOCKED_H
