//
// Created by yaowenqiang on 2023/2/14.
//

#include "AccountLocked.h"

const char* AccountLocked::what() const noexcept {
    return "Your account is locked! Contact the admin.";
}
