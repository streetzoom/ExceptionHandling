//
// Created by STZ on 6/17/22.
//

#include "IllegalBalanceException.h"

const char *IllegalBalanceException::what() const noexcept {
    std::cout << "IllegalBalanceException(Negative balance)" << std::endl;
    return exception::what();
}
