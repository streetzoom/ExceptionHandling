//
// Created by STZ on 6/17/22.
//
#ifndef CHALLENGE_ILLEGALBALANCEEXCEPTION_H
#define CHALLENGE_ILLEGALBALANCEEXCEPTION_H
#include <iostream>


class IllegalBalanceException: public std::exception {
public:
    IllegalBalanceException() = default;
    ~IllegalBalanceException() override = default;
    const char *what() const noexcept override;
};


#endif //CHALLENGE_ILLEGALBALANCEEXCEPTION_H
