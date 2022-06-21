//
// Created by STZ on 6/17/22.
//
#ifndef CHALLENGE_INSUFFICIENTFUNDSEXCEPTION_H
#define CHALLENGE_INSUFFICIENTFUNDSEXCEPTION_H
#include <iostream>

class InsufficientFundsException: public std::exception {
public:
    InsufficientFundsException() = default;
    ~InsufficientFundsException() override = default;
    const char *what() const noexcept override;
};


#endif //CHALLENGE_INSUFFICIENTFUNDSEXCEPTION_H
