//
// Created by STZ on 6/17/22.
//

#include "InsufficientFundsException.h"

const char *InsufficientFundsException::what() const noexcept {
    std::cout << "InsufficientFundsExceptio(negative balance withdraw)" << std::endl;
    return exception::what();
}
